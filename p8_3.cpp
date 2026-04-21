#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;

string logs[100];
int idx = 0;

void addLog(string s) {
    logs[idx++] = s;
}

class myexception : public runtime_error {
public:
    myexception(string s) : runtime_error(s) {}
};


class bank {
public:
    int balance;
    int account_number;

    bank() {}

    bank(int b, int a) {
        balance = b;
        account_number = a;
        addLog("Bank constructor called");
    }

    void withdraw(int x) {
        addLog("Entered withdraw()");

        if (x <= 0) {
            addLog("Invalid withdrawal amount");
            throw myexception("Amount must be positive");
        }

        if (x > balance) {
            addLog("Insufficient balance");
            throw myexception("Not enough balance");
        }

        balance -= x;
        addLog("Withdrawal successful");

        addLog("Exiting withdraw()");
    }
};


void process(bank &b) {
    addLog("Entered process()");
    b.withdraw(5000); 
    addLog("Exiting process()");
}

void start(bank &b) {
    addLog("Entered start()");
    process(b);
    addLog("Exiting start()");
}

int main() {
    addLog("Entered main()");

    bank b(2000, 1);

    try {
        start(b);
    }
    catch (const exception &e) {
        addLog("Exception caught in main()");
        addLog(string("Message: ") + e.what());
    }

    addLog("Exiting main()");

    cout << "\n--- Logs ---\n";
    for (int i = 0; i < idx; i++) {
        cout << logs[i] << endl;
    }

    return 0;
}