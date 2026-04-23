#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string name[100],s;
    int quantity[100],n;
    int price[100];
    ofstream    d1("inventry.txt");

    cout<<"enter total number of item:";
    cin>>n;
    for(int i=0;i<n;i++){

    cout<<"name:";
    cin>>name[i];
    cout<<"quantity:";
    cin>>quantity[i];
    cout<<"price:";
    cin>>price[i];
    }

    d1<<"name"<<"     "<<"quantity"<<"          "<<"price"<<endl;
   
    for(int i=0;i<n;i++){
    d1<<name[i]<<"                "<<quantity[i]<<"                    "<<price[i]<<endl;
    
    
    }
    d1.close();
    ifstream d2("inventry.txt");
    string ans,searchName;

    cout<<"do you want to search:";
    cin>>ans;
    if(ans=="yes")
    {
        cout<<"enter name to search:";
        cin>>searchName;
        while(d2>>s)
        {
            if(s==searchName)
            {
                cout<<"Item found!"<<endl;
                break;
            }
            else{
            cout<<"Item not found!"<<endl;
            break;
            }

        }
    }

return 0;
}