#include <iostream>
using namespace std;

class employe
{
    string name;
    long int basicSalary;
    int bonusAmount;

public:
    employe() {
        name = "None";
        basicSalary = 0;
        bonusAmount = 0;
    }

    employe(string n,long int s,int a)
    {
        name=n;
        basicSalary=s;
        bonusAmount=a;
    }

    void display(){
        cout<<"employee name:"<<name<<endl;
        cout<<"basic salary:"<<basicSalary<<endl;
        cout<<"bonus amount:"<<bonusAmount<<endl;
        cout<<"total amount of salary:"<<totalSalary()<<endl;
    }

    inline long int totalSalary()
    {
        return basicSalary+bonusAmount;
    }
};

int main()
{
    string name;
    long int bs;
    int ba;

    int n;
    cout << "enter the total number of employee=";
    cin >> n;

    employe *e = new employe[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter name:";
        cin >> name;
        cout << "enter basic salary:";
        cin >> bs;
        cout << "enter bonus amount:";
        cin >> ba;

        e[i] = employe(name, bs, ba);
    }

    for(int i=0;i<n;i++)
    {
        cout<<"=========info==========\n";
        e[i].display();
    }

    delete[] e; 

    cout<<"25cs025";
    return 0;
}