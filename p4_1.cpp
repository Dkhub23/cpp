#include<iostream>
using namespace std;

void Insert(int arr[],int n)
{
    int ans;
    cout<<"How many elements you want two add=";
    cin>>ans;
    int x=ans+n;
      int *arr1=new int[x];
      for(int i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    cout<<sizeof(arr1);

    for(int i=n;i<n+ans;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n+ans;i++)
    {
        cout<<arr1[i];
    }
      
    
}

int main(){
    int n;
    cout<<"enter the total number of element:";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Do you want to insert an element:";
    string ans;
    cin>>ans;
    if(ans=="yes")
    {
       Insert(arr,n);
    }
return 0;
}