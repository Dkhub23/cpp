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
    a.add(2, 3);
    a.add(2.2f,3.2f);
    a.add(3,2.3f);

    return 0;
}