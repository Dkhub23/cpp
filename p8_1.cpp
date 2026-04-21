#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a and b:";
    try{
        if(!(cin >> a >> b))
        throw "invalide integer";
        if(b==0)
        throw "the value of b is must greater than 0";
      
        cout<<"a/b:"<<a/b;

    }
    
    catch(const char* s){
        cout<<"error:"<<s<<endl;

    }
    cout<<"\n 25cs025";
}