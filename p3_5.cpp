#include<iostream>
using namespace std;

int main(){
int n,k,r,sum=0;
cin>>n;
cin>>k;
int *a=(int*)malloc(sizeof(int)*(n*k));
for(int i=0;i<k;i++)
{
    a[i]=n;
}
for(int i=0;i<k;i++)
{
    cout<<a[i];
}
cout<<endl;
while(n!=0)
{
    r=n%10;
    sum+=r;
    n=n/10;
}
sum*=k;
cout<<sum<<endl;
int r1 ,finalA=0;
while(sum!=0)
{
    r1=sum%10;
    finalA+=r1;
    sum=sum/10;
}
cout<<finalA;
cout<<"\n25cs025";
return 0;
}