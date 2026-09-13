#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;

    if (a < 2) {
        cout << "No" << endl; 
        return 0;
    }
    bool is_prime = true; 
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            is_prime = false; 
            break;            
        }
    }

    if (is_prime) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}