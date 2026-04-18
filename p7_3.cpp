#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class fehrenhit;
class celsius{
    float temp;
    public:
    celsius(){};
    celsius(float f){
        temp=f;
    }
    float get(){
        return temp;
    }
    bool operator==(celsius &c){
        if(temp==c.temp)
        return true;
        else
        return false;
    
        }
    float convert_f(){
        return 9.0/5.0*temp+32.0;
    }
    friend bool operator==(celsius c, fehrenhit f);

};
class fehrenhit{
    float temp1;
    public:
    fehrenhit(){};
    fehrenhit(float f){
        temp1=f;
    }
    float get(){
        return temp1;
    }
    bool operator==(fehrenhit &c){
        if(temp1==c.temp1)
        return true;
        else
        return false;
    
        }
        float convert_c(){
        return (temp1-32.0)*5.0/9.0;
    }
    friend bool operator==(celsius c, fehrenhit f);
};
bool operator==(celsius c, fehrenhit f)
{
    return c.convert_f() == f.get();
}
int main()
{
    celsius c1(1);
    cout<<"convert into fehrnhit="<<c1.convert_f()<<endl;

    fehrenhit f1(33.8);
    cout<<"convert into celsius="<<f1.convert_c()<<endl;

    fehrenhit f2(3);
    celsius c2(1);
    int ans=(c1==f1);
    int ans1=(c2==f2);
    cout<<"c1==f1:"<<ans<<endl;
     cout<<"c2==f2:"<<ans1<<endl;
     

     cout<<"\n25cs025";

}
