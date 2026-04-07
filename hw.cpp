#include<iostream>
using namespace std;
int main()
{
    int a1[7]={1,2,3};
    int a2[4]={2,3,4,5};
    for(int i=3;i<3+4;i++)
    {
        a1[i]=a2[i-3];
    }
    for(int i=0;i<3+4;i++)
    {
        cout<<a1[i];
    }
}