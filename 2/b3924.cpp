#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int side = n - 1, mid = n / 2;
    vector<string> vec(n, string(n, 'a'));
    for (int i = 0; i < n; i++) {
        vec[i][0] = '|';
        vec[i][side] = '|';
        if (i > 0 && i < side) vec[mid][i] = '-';
    }
    for (auto &row: vec) {
        cout << row << "\n";
    }
}
