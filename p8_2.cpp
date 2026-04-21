#include <iostream>
#include<exception>
#include<stdexcept>
#include<algorithm>
#include<math.h>
using namespace std;
class NegativeNumberException
{
    int  n;
    public:
    NegativeNumberException(){};
    NegativeNumberException(int n){
        this->n=n;
        if(n<0)
        throw string("negative number");
        else
        {
            cout<<"sqrt of given number is:"<<sqrt(n)<<endl;
        }
    }
};

int main()
{

    NegativeNumberException n1[5];
    for (int i = 0; i < 5; i++)
    {
        int num;
        try
        {
            cout << "enter the number:";
            cin >> num;
            n1[i]=NegativeNumberException(num);
        }
        catch(string & e){
            cout<<"error:"<<e<<endl;

        }
    }
    cout<<"\n25cs025";

    return 0;
}