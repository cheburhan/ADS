#include <iostream>
#include <vector> 
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    vector<char> vek1;
    vector<char> vek2;

   
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != '#') {
            vek1.push_back(a[i]); 
        } else if (!vek1.empty()) { 
            vek1.pop_back();        
        }
    }

    for (int i = 0; i < b.size(); i++) {
        if (b[i] != '#') {
            vek2.push_back(b[i]);
        } else if (!vek2.empty()) {
            vek2.pop_back();
        }
    }

    if (vek1 == vek2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}