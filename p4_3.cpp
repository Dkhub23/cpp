#include<iostream>
using namespace std;

int main(){
    int n,m,k=0;
    cout<<"enter the size of arr1 and arr2:";
    cin>>n>>m;

    int *arr1=new int[n];
    int *arr2=new int[m];
    int *arr3=new int[m+n];

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    int i=0,j=0;

    while(i<n && j<m)
    {
        if(arr1[i] <= arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    while(i<n)
    {
        arr3[k++] = arr1[i++];
    }

    while(j<m)
    {
        arr3[k++] = arr2[j++];
    }

    for(int i=0;i<k;i++)
    {
        cout<<arr3[i]<<" ";
    }

    cout<<"\n25cs025";
    return 0;
}