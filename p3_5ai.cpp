#include<iostream>
using namespace std;

int superDigit(long long num)
{
    if(num < 10)
        return num;
    long long sum = 0;
    while(num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return superDigit(sum);
}

int main()
{
    long long n;
    int k;
    cin >> n >> k;
    long long sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    sum *= k;
    cout << superDigit(sum);
    cout<<"\n25cs025";
    return 0;
}