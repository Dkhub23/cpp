#include<iostream>
using namespace std;
class sum{
    int total=0;
    public:
    
    int recursive(int a[],int n1)
    {
        
        if(n1==0)
        {
            return 0;
        }

        return a[n1-1]+recursive(a,n1-1);
    }
    int iterative(int a[],int x)
    {
        for(int i=0;i<x;i++)
        {
        total=total+a[i];
        }
        cout<<"total of itractive:"<<total<<endl;
        return total;

    }

};

int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int *s= (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sum s1;

    s1.iterative(s,n);
     cout<<"total of recursive:"<<s1.recursive(s,n);
cout<<"\n25cs025";
return 0;
}