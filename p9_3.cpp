#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    set<int> s;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x); 
    }

    cout << "\nUnique sorted elements (using set):\n";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }

    vector<int> v(s.begin(), s.end());

    cout << "\n\nElements copied to vector:\n";
    for (int val : v) {
        cout << val << " ";
    }

    return 0;
}