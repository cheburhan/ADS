#include <iostream>
#include <vector> 

using namespace std;

int main() {
    int a;
    cin >> a;

    vector<int> v; 
    for (int i = 2; i <= 7920; i++) {
        bool is_prime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false; 
                break;
            }
        }

        if (is_prime) {
            v.push_back(i);
        }

        if (v.size() == a) {
            break;
        }
    }

    cout << v[a - 1] << endl;

    return 0;
}