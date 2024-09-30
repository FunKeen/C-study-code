#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int side = n - 1, mid = n / 2;
    vector<string> vec(n, string(n, 'x'));
    for (int i = 0; i < n; i++) {
        vec[i][0] = '|';
        vec[i][side] = '|';
        if (i > 0 && i < side) {
            vec[0][i] = '-';
            vec[mid][i] = '-';
            vec[side][i] = '-';
        }
    }
    for (auto &row: vec) {
        cout << row << "\n";
    }
}
