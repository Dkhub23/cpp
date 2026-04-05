#include<iostream>
using namespace std;
class wallet{
    public:
    int id;
    string name;
    int balance;
    public:
     wallet()
    {
        name="none";
        balance=0;
    }
    wallet(int i,string s,int b)
    {
        id=i;
        name=s;
        balance=b;
    }
    void loadingMoney(int m)
    {
        balance=+m;
    }
    void transferMoney(wallet s[],int x,int y,int n)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i].id==x)
            {
                balance-=y;
                s[i].balance+=y;
                cout<<"money transfer succesfully!";
                break;
            }
        }
    }
    void display()
    {
        cout<<"id:"<<id<<endl;
        cout<<"user name:"<<name<<endl;
        cout<<"balance:"<<balance<<endl;
    }

};
int main()
{
    int id;
    string name;
    int balance;
    int n;
    cout<<"enter total number of walled id:";
    cin>>n;
    wallet *w=new wallet[n];
    for(int i=0;i<n;i++)
    {
        cin>>id>>name>>balance;
        w[i]=wallet(id,name,balance);
    }
    int a,b;
    string ans;
    for(int i=0;i<n;i++)
    {
        cout<<"wallet id:"<<w[i].id<<"  do you want to transfer money:";
        cin>>ans;
        if(ans=="yes")
        {
            cout<<"enter wallet id and total amount of money:";
            cin>>a>>b;
            w[i].transferMoney(w,a,b,n);
        }
        if(ans=="no")
        {
            cout<<"thannk you for your response!!!"<<endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        w[i].display();
    }
    
}