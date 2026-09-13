#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string word;
    vector <char> vek1;
    cin >> word;
    for (int i = 0; i < word.size(); i++){
        if (!vek1.empty() && word[i]== vek1.back()){
            vek1.pop_back();
        }
        else {
            vek1.push_back(word[i]);
        }
    } 
    if (vek1.empty()){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
} 