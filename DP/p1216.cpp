#include <iostream>
#include <vector>

using namespace std;


int main() {
    int r, temp;
    cin >> r;
    vector<vector<int>> mem(r + 1, vector<int>(r + 1, 0));
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> temp;
            mem[i][j] = temp;
        }
    }
    int m = 0;
    for (int i = 2; i <= r; ++i) {
        for (int j = 1; j <= i; ++j) {
            mem[i][j] = mem[i][j] + max(mem[i - 1][j], mem[i - 1][j - 1]);
            if (mem[i][j] > m)
                m = mem[i][j];
        }
    }
    cout << m << "\n";
    return 0;
}