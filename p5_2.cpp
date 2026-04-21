#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    string s1;
    int word = 0;
    int c = 0;
    int line = 0;

    ifstream d1("file.txt");

    if (!d1) {
        cout << "Error opening file";
        return 1;
    }

    while (getline(d1, s1)) {
        line++;
        bool inword;

        for (int i = 0; i < s1.length(); i++) {
            c++; 

            if (isspace(s1[i])) {
                inword = false;
            } else if (!inword) {
                word++; 
                inword = true;
            }
        }
    }

    cout << "Lines: " << line << endl;
    cout << "Words: " << word << endl;
   cout << "Characters: " << c << endl;
    
        return 0;
        cout<<"\n25cs025";
    }
