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

};


int main(){
     A a1(1,2);



return 0;
}