#include <iostream>
using namespace std;
class bank
{
    long int accountNumber;
    string Aholder;
    long int balance;
    static int a;

public:
bank() {}
    bank(long int c, string a, long int b)
    {
        accountNumber = c;
        Aholder = a;
        balance = b;
    }
    void display()
    {
        cout << "Account number:" << accountNumber;
        cout << "\nAccount holders name:" << Aholder;
        cout << "\nCurrent balance:" << balance << endl;
    }
    int transferMoney(bank b1[], long int d, long int e, int n)
    {

        for (int i = 0; i < n; i++)
        {
            if (b1[i].accountNumber == d)
            
            {

                if (e > balance)
                {
                    cout << "you have not enough tranfer money!\n";
                }
                else
                {
                    b1[i].balance += e;
                    balance = balance - e;
                    cout << "==========after money transfer==========\n";
                    display();
                }
                break;
            }
        }
    }
};
int bank::a = 1;
int main()
{
    int n;
    long int accountNumber;
    string Aholder;
    long int balance;
    cout << "enter total number of account:";
    cin >> n;
    bank *b = new bank[n];

    // bank *b = (bank *)malloc(sizeof(bank) * n);

    for (int i = 0; i < n; i++)
    {
        cout << "\nenter account number:";
        cin >> accountNumber;
        
        cout << "\naccount holder name:";
        cin >> Aholder;
        cout << "\ncurrent balance:";
        cin >> balance;
        b[i] = bank(accountNumber, Aholder, balance);
    }
    string answer;
    long int transferan, money;

    for (int i = 0; i < n; i++)
    {
        cout << "==============info==============\n";
        b[i].display();
        cout << "you want to transfer money in another account:";
        cin >> answer;
        if (answer == "yes")
        {
            cout << "\nenter account number that you want to transfer money:";
            cin >> transferan;
            cout << "\nenter money amount:";
            cin >> money;
            b[i].transferMoney(b, transferan, money, n);
        }
    }
    cout<<"\n25cs025";
    return 0;
}