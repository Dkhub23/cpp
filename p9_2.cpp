#include<iostream>
#include<sstream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,int> freq;
    string sentence;
    string word;
    cout<<"enter the string:";
    getline(cin,sentence);

    stringstream ss(sentence);
    while(ss>>word)
    {
        freq[word]++;
    }
     cout << "\nWord Frequencies:\n";
    for (auto it : freq) {
        cout << it.first << " : " << it.second << endl;
    }
    cout<<"\n25cs025";

}