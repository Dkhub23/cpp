#include <iostream>
using namespace std;

class library{
    int bookid;
    string title;
    string author;
    int copies;

public:
    library(int bi,string t,string a,int c){
        bookid=bi;
        title=t;
        author=a;
        copies=c;
    }

    void Add(int add){
        copies += add;
        cout<<"Total copies now: "<<copies<<endl;
    }

    void issu(int b_issu){
        if(copies >= b_issu){
            copies -= b_issu;
            cout<<b_issu<<" book(s) issued\n";
        } else {
            cout<<"Not enough copies available\n";
        }
    }

    void display(){
        cout<<"Book ID: "<<bookid<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Available copies: "<<copies<<endl;
    }
};

int main()
{
    library l(101,"Title1","Author1",10);
    l.Add(2);
    l.issu(2);
    l.display();

    cout<<"\nSecond Book\n";

    library l2(102,"Title2","Author2",5);
    l2.Add(1);
    l2.issu(3);
    l2.display();

    cout<<"25cs025";
    return 0;
}
