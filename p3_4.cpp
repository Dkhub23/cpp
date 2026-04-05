#include <iostream>
using namespace std;

template <typename T>
void display(T arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

template <typename T>
T findMax(T arr[], int n)
{
    T max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

template <typename T>
void reverseArray(T arr[], int n)
{
    for(int i=0;i<n/2;i++)
    {
        T temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

template <typename T>
void leaderElements(T arr[], int n)
{
    T maxRight = arr[n-1];
    cout<<maxRight<<" ";

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i] > maxRight)
        {
            maxRight = arr[i];
            cout<<maxRight<<" ";
        }
    }
}

int main()
{
    int arr1[] = {16,17,4,3,5,2};
    int n1 = 6;

    cout<<"Integer Array: ";
    display(arr1,n1);

    cout<<"Maximum: "<<findMax(arr1,n1)<<endl;

    reverseArray(arr1,n1);
    cout<<"Reversed: ";
    display(arr1,n1);

    cout<<"Leader Elements: ";
    leaderElements(arr1,n1);

    cout<<"\n25cs025";

    return 0;
}