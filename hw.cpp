#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
int getx(int a)
{
    return -a;
}
    string convertToBase7(int num) {
        int temp=num;
        string ans="";
        if(num=='0')
        return "0";
        if(num<0)
        num=abs(num);
        while(num>0)
        {
            ans.push_back(num%7+'0');
            num=num/7;
        }
        if(temp<0)
        ans.push_back('-');
        ans.push_back(num);
        reverse(ans.begin(),ans.end());
        cout<<ans;
        return ans;
       

       
    }
};

int main()
{
    Solution s;
    s.convertToBase7(-7);
}