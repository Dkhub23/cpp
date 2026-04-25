#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
ostream& currency(ostream &os)
{
    return os<<"$";
}

int main(){
    string name[]={"dhruvi","princee","riya"};
    int marks[]={90,80,97};
    double fee[]={2190.89,83993.9388,890.5432};
    cout<<setfill('-')<<setw(55)<<"-"<<endl;
    cout<<setfill(' ');
    cout<<left<<setw(25)<<"student name"<<setw(20)<<"marks"<<setw(15)<<"fees"<<endl;
     cout<<setfill('-')<<setw(55)<<"-"<<endl;
    cout<<setfill(' ');
    for(int i=0;i<3;i++)
    {
        cout<<left<<setw(25)<<name[i]<<setw(20)<<marks[i]<<currency<<fixed<<setprecision(2)<<fee[i]<<endl;
    }
 cout<<setfill('-')<<setw(55)<<"-"<<endl;
    
cout<<"\n25cs025";
return 0;
}