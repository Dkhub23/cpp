#include<iostream>
#include<vector>
using namespace std;

class shape1{
protected:
    int radius;
public:
    shape1()
    {
        radius = 1;
    }
    shape1(int r)
    {
        radius = r;
    }
};

class circle: public shape1{
    float ans;
public:
    circle() {}

    circle(int r) : shape1(r) {}

    float calculate()
    {
        ans = 3.14 * radius * radius;
        return ans;
    }
};

int main(){
    circle obj[3];
    int a,arr;

    cout<<"enter radius of different circles:";
    for(int i=0;i<3;i++)
    {
        cin>>a;
        obj[i] = circle(a);
    }

    for(int i=0;i<3;i++)
    {
        cout << obj[i].calculate() << endl;
    }
    
     vector<circle> vec;
    cout<<"enter size of arry:";
    cin>>arr;
    for(int i=0;i<arr;i++)
    {
          cout<<"enter radius of different circles:";
        cin>>a;
        vec.push_back(circle(a));
        
    }
     for(int i=0;i<arr;i++)
    {
        cout << vec[i].calculate() << endl;
    }

    return 0;
}