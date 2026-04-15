#include<iostream>
using namespace std;

class person{
    protected:
    string name;
    int age;
    public:
    person(){

    }
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
class employee:public person{
    protected:
    int id;
    public:
    employee()
    {

    }
    employee(string name,int age,int id):person(name,age){
        this->id=id;
    }

};
class manager:public employee{
    string dept;
    public:
    // manager(){

    // }
    manager(string name,int age,int id,string dept):employee(name,age,id){
        this->dept=dept;
    }
    void display(){
        cout<<"=========information========\n";
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"id:"<<id<<endl;
        cout<<"department:"<<dept<<endl;
    }
};

int main(){
    manager m1("riya",18,25,"computer");
    m1.display();
    cout<<"\n25cs025";

return 0;
}