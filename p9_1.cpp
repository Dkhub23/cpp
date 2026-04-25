#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<int> arr={1,2,3,4,5,6,7};
   reverse(arr.begin(),arr.end());
   for(int x:arr)
   {
    cout<<x<<" ";
   }
   for(int i = 0; i < (arr.size()) / 2; ++i)
   {
    iter_swap(arr.begin() + i, arr.end() - i - 1);
   }
   cout<<endl;
    for(int x:arr)
   {
    cout<<x<<" ";
   }
cout<<"\n25cs025";
return 0;
}