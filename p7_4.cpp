#include<iostream>
#include<vector>
using namespace std;
class shape{
    public:
    virtual void area()=0;
};
class Rectangle:public shape{
    int l;
    int w;
    public:
    Rectangle(int l,int w){
        this->l=l;
        this->w=w;
    }
    void area(){
        int ans=l*w;
        cout<<"the area of rectangle: "<<ans<<endl;
    }


};
class circle:public shape{
    int r;
    public:
    circle(int r){
        this->r=r;
    }
    void area()
    {
        float ans;
        ans=3.14*r*r;
        cout<<"area of circle is:"<<ans<<endl;
    }
};

int main(){
    // circle c1(2);
    // c1.area();
    // Rectangle r1(3,4);
    // r1.area();

  vector<shape*> shapes;  

    shapes.push_back(new circle(2));
    shapes.push_back(new Rectangle(3,4));
    shapes.push_back(new circle(4));
    shapes.push_back(new Rectangle(30,4));

    for(int i = 0; i < shapes.size(); i++){
        shapes[i]->area();  
       }

    for(int i = 0; i < shapes.size(); i++){
        delete shapes[i];
    }
    cout<<"\n25cs025";

return 0;
}