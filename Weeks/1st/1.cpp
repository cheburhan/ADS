#include <iostream>
using namespace std;
int gcd (int a, int b){
    while (b != 0){
        int c = a%b;
        a = b;
        b = c;
    }
    return a;
}
int main (){
    int num1, num2;
    cout <<;
    cin >> num1 >> num2 ;
    int res = gcd(num1, num2);
    cout << res << endl;
    return 0;
}