#include <iostream>

using namespace std;

long long binpow(long long a, long long n, long long m) {
    if (n == 0)
        return 1 % m; 
    a %= m; 
    if (n % 2 == 0) {
        long long half = binpow(a, n / 2, m);
        return (half * half) % m; 
    } else {
        return (a * binpow(a, n - 1, m)) % m; 
    }
}

int main() {
    long long base, exp, mod;
    cin >> base >> exp >> mod;
    
    cout << binpow(base, exp, mod) << endl;
    
    return 0;
}