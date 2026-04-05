#include<iostream>
#include<string>
using namespace std;

class Wallet {
    int id;
    string name;
    float balance;

public:
    Wallet() {
        id = 0;
        name = "None";
        balance = 0;
    }

    Wallet(int i, string n, float b) {
        id = i;
        name = n;
        balance = b;
    }

    void loadMoney(float amount) {
        balance += amount;
    }

    void transferMoney(Wallet &w, float amount) {
        if (amount <= balance) {
            balance -= amount;
            w.balance += amount;
        } else {
            cout << "Insufficient balance!\n";
        }
    }
    
    void display() {
        cout << "Wallet ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Wallet w1(1, "Dhruvi", 1000);
    Wallet w2(2, "Riya", 500);

  
    w1.loadMoney(500);

 
    w1.transferMoney(w2, 300);


    cout << "\nWallet 1 Details:\n";
    w1.display();

    cout << "\nWallet 2 Details:\n";
    w2.display();
cout<<"\n25cs025";
    return 0;
}