#include<iostream>
#include <cctype>
#include<string>
using namespace std;

int main(){
    string p;
    string word[100];
    int count[100]={0};
    int wordcount=0;
cout<<"enter paragraph= ";
getline(cin,p);
string currentWord="";

for(int i=0;i<p.length();i++)
{
    char c=p[i];
    if(isalnum(c)){
        currentWord+=(char)tolower(c);
    }
    else if(currentWord!="")
    {
        bool found=false;
        for(int i=0;i<wordcount;i++)
        {
            if(currentWord==word[i])
            {
                count[i]++;
                found=true;
               break;

            }
        }
        if(!found && wordcount < 100) {
            word[wordcount] = currentWord;
            count[wordcount] = 1;
            wordcount++;
        }
        currentWord = "";
    }
    
    
}

for(int i=0;i<wordcount;i++)
{
    cout<<word[i]<<" "<<count[i]<<endl;
}
cout<<"25cs025";
return 0;
}