#include <iostream>
using namespace std;

class A
{
    public:
    int a,b;
    int add(int a, int b)
    {
        return a + b;
    }
    float add(float a, float b)
    {
        return a + b;
    }
    float add(int a, float b)
    {
        return a + b;
    }
};
int main()
{
    A a;
    cout<<a.add(2, 3)<<endl;
    cout<<a.add(2.2f,3.2f)<<endl;
    cout<<a.add(3,2.3f);
    cout<<"\n25cs025";

    return 0;
}