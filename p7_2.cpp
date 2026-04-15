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
     A a3;
     a3=a1+a2;
    cout<<"addition of a1 and a1:a3.display()"<<endl;
     A a4;
     a4=a2-a1;
      cout<<"addition of a1 and a1:";
     a4.display();



return 0;
}