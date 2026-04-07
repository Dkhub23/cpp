#include<iostream>
using namespace std;
class A{
    public:
    int x,y;
    
    A()
    {
        x=0;
        y=0;
    }
    A(int a,int b)
    {
        x=a;
        y=b;
    }
    int grtx()
    {
        return this->x;
    }
     int grty()
    {
        return this->y;
    }
    int nx(int a)
    {
       return -a;
    }
     int ny(int b)
    {
       return -b;
    }
    A & move(int dx,int dy)
    {
        this->x+=dx;
        this->y+=dy;
        return *this;
    }
    void reset(int a,int b)

    {
        this->move(nx(a),ny(b));
    }

};


int main(){
    A p(1,2);
    cout<<"p.move(1,2).move(1,2):";
    p.move(1,2).move(1,2);
    cout<<p.x<<" ";
    cout<<p.y<<endl;
    cout<<"p.reset(1,2):";
    p.reset(1,2);
    cout<<p.x<<" ";
    cout<<p.y<<" ";

    cout<<"\n25cs025";
    

return 0;
}