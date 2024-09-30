#include <iostream>

using namespace std;

int main() {
    int n, temp, res = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        res *= temp;
        if (res > 1000000) {
            cout << ">1000000" << "\n";
            return 0;
        }
    }
    cout << res << "\n";
}
