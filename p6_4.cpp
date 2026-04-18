#include<iostream>
using namespace std;

class base{
protected:
    int account_number, current_balance;

public:
    base(int a,int b){
        account_number = a;
        current_balance = b;
    }
};

class saving: public base{
    float interest_rate;
    int time;

public:
    saving(int a,int b): base(a,b){}

    int withdraw(int x){
        if(x>current_balance)
        {
            string ans;
            int t;
            cout<<"you have not enough money\nDo you want to take loan=";
            cin>>ans;
            if(ans=="yes")
            {
                cout<<"months:";
                cin>>t;
                calculateInterest(t,x);
            }
            else{
                cout<<"you can not withdraw ,you have not enough money!"<<endl;
            }
           
        }
         else
            {
                cout<<"withdraw succesfull!"<<endl;
                cout<<"current balance:"<<current_balance-x<<endl;

            }
    }

    void calculateInterest(int t,int money){
        time = t;
        interest_rate=1.2;

        float interest = ((money-current_balance) * interest_rate * time) / 100;

        current_balance += interest;

        cout << "After interest, current balance: " << current_balance << endl;
    }
};

class current: public base{
public:
    current(int a,int b): base(a,b){}
    
};

int main(){
    saving s1(12,20000);
    s1.withdraw(30000);

     saving s2(13,20000);
    s2.withdraw(10000);
    cout<<"\n25cs025";
    
}