#include<iostream>
using namespace std;
class base{
    public:
   
    base(){
         cout<<"base class constructor\n";
    };
    virtual ~ base(){
        cout<<"base class destructor\n";
    }

};
class derived : public base{
    public:
    derived(){
         cout<<"derived class constructor\n";
    };
    ~ derived(){
        cout<<"derived class destructor\n";
    }

};
int main()
{
    base* b1 = new derived;
    delete b1;
}