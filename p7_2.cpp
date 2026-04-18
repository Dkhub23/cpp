#include<iostream>
using namespace std;
class A{
    public:
    int x;
    int y;
    A()
    {

    }
    
    A(int a,int b){
        x=a;
        y=b;

    }
    A operator +(const A& obj)const{
        return A(x+obj.x,y+obj.y);
    }
     A operator -(const A& obj)const{
        return A(x-obj.x,y-obj.y);
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }

};


int main(){
     A a1(1,2);
     A a2(2,3);
     
      A a3 = a1 + a2;
    cout << "Addition of a1 and a2: ";
    a3.display();

    A a4 = a2 - a1;
    cout << "Subtraction of a2 and a1: ";
    a4.display();


     cout<<"\n25cs025";



return 0;
}