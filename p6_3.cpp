#include<iostream>
using namespace std;

class fuel{
protected:
    string f;
public:
    fuel() {}

    fuel(string a){
        f = a;
    }
};

class brand{
protected:
    string model;
public:
    // brand() {}

    brand(string a){
        model = a;
    }
};

class car : public fuel, public brand{
public:
    // car() {}

    car(string fuelType, string modelName)
        : fuel(fuelType), brand(modelName)
    {
    }

    void display(){
        cout << "===========car info==========\n";
        cout << "type of fuel: " << f << endl;
        cout << "type of model: " << model << endl;
    }
};

int main()
{
    car c1("petrol", "maruti");
    c1.display();
    cout<<"\n25cs025";
}