// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// class student{
//     int roll_no;
//     string name;
//     int m1,m2,m3;
//     public:
//     student (string x,int r,int a, int b, int c){
//         name=x;
//         roll_no=r;
//         m1=a;
//         m2=b;
//         m3=c;
//      }
//        student(){
//         name="None";
//         roll_no=0;
//         m1=1;
//         m2=2;
//         m3=3;
//     }
    
//     // student()
//     // {
//     //     cout<<"enter your name";
//     //     cin>>name;
//     //     cout<<"enter your roll number:";
//     //     cin>>roll_no;
//     //     cout<<"marks of subject 1:";
//     //     cin>>m1;
//     //      cout<<"marks of subject 2:";
//     //     cin>>m2;
//     //      cout<<"marks of subject 3:";
//     //     cin>>m3;
//     // }
    
//     void average()
//     {
//        int avg=(m1+m2+m3)/3;
//        cout<<"average marks of three subject:"<<avg<<endl;
//     }

// };


// int main(){
// string name;
// int r,a,b,c,n;

//  student *s=(student*)malloc(sizeof(student));
//  for(int i=0;i<2;i++)
//  {
//     cin>>name;
//     cin>>r;
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     s[i]=student(name,r,a,b,c);
//      s[i].average();
// }
// // student s("dhruvi",2,34,45,56);
// // s.average();
// // student s1("riya",3,78,90,67);
// // s1.average();

// return 0;
// }
#include<iostream>
using namespace std;

class student{
    int roll_no;
    string name;
    int m1,m2,m3;

public:
    student (string x,int r,int a, int b, int c){
        name=x;
        roll_no=r;
        m1=a;
        m2=b;
        m3=c;
    }

    student(){
        name="None";
        roll_no=0;
        m1=1;
        m2=2;
        m3=3;
    }

    void average()
    {
       int avg=(m1+m2+m3)/3;
       cout<<"average marks of three subject:"<<avg<<endl;
    }
};

int main(){
    string name;
    int r,a,b,c;

    student *s = new student[2]; 

    for(int i=0;i<2;i++)
    {
        cin>>name>>r>>a>>b>>c;
        s[i] = student(name,r,a,b,c);
        s[i].average();
    }
    cout<<"\n25cs025";

    delete[] s; 

    return 0;
}