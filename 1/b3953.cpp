#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> s;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;
            if (a == b) cout << a << endl;
            else {
                cout << a << endl;
                s.push(b);
            }
        }
    }
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}