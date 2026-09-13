#include < iostream >
#include < queue >

using namespace std;

int main() {
    int a, b;
    int c = 0;
    queue < int > bor; 
    queue < int > nur; 

    for (int i = 0; i < 5; i++) {
        int card;
        cin >> card;
        bor.push(card);
    }

    for (int i = 0; i < 5; i++) {
        int card;
        cin >> card;
        nur.push(card);
    }

    while (!nur.empty() && !bor.empty()) {
        b = bor.front();
        bor.pop();
        a = nur.front();
        nur.pop();

        c++;

        if ((a == 0 && b == 9) || (a > b && !(a == 9 && b == 0))) {
            nur.push(b); 
            nur.push(a); 
        } else {
            bor.push(b); 
            bor.push(a); 
        }
    }

    if (bor.empty()) {
        cout << "Nursik " << c;
    } else {
        cout << "Boris " << c;
    }

    return 0;
}