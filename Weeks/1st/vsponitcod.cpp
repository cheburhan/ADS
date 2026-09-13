#include <iostream>
using namespace std;
int gcd (int a, int b){
    return a + b;
}
int main (){
    int num1, num2;
    cout <<"1 число дай";
    cin >> num1 ;

    cout <<"1 число дай";
    cin >> num2;

    int sum = gcd(num1, num2);
    cout << sum << endl;
    return 0;
}