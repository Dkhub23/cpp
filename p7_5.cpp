#include<iostream>
#include<vector>
using namespace std;

class base {
protected:
    int marks;

public:
    base(int m) {
        marks = m;
    }

    virtual void calculate() = 0; 
};

class undergraduate : public base {
public:
    undergraduate(int m) : base(m) {}

    void calculate() override {
        cout << "Undergraduate Grade: ";
        if (marks >= 75) cout << "A";
        else if (marks >= 60) cout << "B";
        else if (marks >= 50) cout << "C";
        else cout << "F";
        cout << endl;
    }
};

class postgraduate : public base {
public:
    postgraduate(int m) : base(m) {}

    void calculate() override {
        cout << "Postgraduate Grade: ";
        if (marks >= 85) cout << "A";
        else if (marks >= 70) cout << "B";
        else if (marks >= 60) cout << "C";
        else cout << "F";
        cout << endl;
    }
};

int main() {
    vector<base*> students;

    students.push_back(new undergraduate(92));
    students.push_back(new postgraduate(72));

    
        students[0]->calculate(); 
          students[1]->calculate();  
    

  
     delete  students[1];
      delete  students[0];
    cout<<"\n25cs025";
    return 0;
}