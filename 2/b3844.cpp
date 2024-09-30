#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    string a;
    a.reserve(n * (n + 1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) a += (char) (65 + (i + j) % 26);
        a += "\n";
    }
    cout << a;
    return 0;
}
