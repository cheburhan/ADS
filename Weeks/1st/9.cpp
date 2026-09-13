#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;

        queue<int> q;
        for (int i = 0; i < n; i++) {
            q.push(i);
        }

        vector<int> result(n);

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                int top = q.front();
                q.pop();
                q.push(top);
            }

            int target_pos = q.front();
            q.pop();

            result[target_pos] = i;
        }

        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}