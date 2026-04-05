#include<iostream>
using namespace std;
class rectangle{
    int lengh;
    int width;
    public:
    void Area(int x, int y)
    {
        cout<<(x*y)<<endl;
    }
     void perimeter(int a, int b)
    {
        cout<<2*(a+b)<<endl;
    }

};
int main(){
    rectangle l1,l2;
    cout<<"area and perimeter of rectangle 1:";
    l1.Area(2,3);
    l1.perimeter(7,3);
    cout<<"area and perimeter of rectangle 2:";
    l2.perimeter(3,4);
    l2.Area(6,7);


    cout<<"\n25cs025";

return 0;
}