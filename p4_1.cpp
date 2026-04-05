#include <iostream>
using namespace std;

class A
{
public:
    int* Insert(int arr[], int &n)
    {
        cout<<"enter total number of element that you want to add:";
        int add;
        cin >> add;

        int *arr1 = new int[n + add];

        for (int i = 0; i < n; i++)
        {
            arr1[i] = arr[i];
        }

        for (int i = n; i < n + add; i++)
        {
            cin >> arr1[i];
        }

        n = n + add;
        return arr1;
    }

    void Delete(int arr[], int &n)
    {
        cout<<"enter position:";
        int pos;
        cin >> pos;

        for (int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;
    }
};

int main()
{
    A a;
    int n;
    cout<<"enter the size of arry:";
    cin >> n;

    int *arr = new int[n];
cout<<"enter elemnets:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
cout<<"do you want enter element:";
    string ans;
    cin >> ans;

    if (ans == "yes")
    {
        arr = a.Insert(arr, n);
    }
cout<<"do you want delete element:";
    string ans1;
    cin >> ans1;

    if (ans1 == "yes")
    {
        a.Delete(arr, n);
    }
    cout<<"final arry:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}