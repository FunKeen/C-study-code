#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> res(n, vector(n, 0));
    int x = 0, y = n / 2, nx = 0, ny = 0;
    res[x][y] = 1;
    for (int i = 2; i <= n * n; ++i) {
        while (true) {
            nx = (x + n - 1) % n;
            ny = (y + 1) % n;
            if (res[nx][ny] != 0)
                break;
            res[nx][ny] = i;
            x = nx;
            y = ny;
            i++;
        }
        if (i > n * n)
            break;
        x += 1;
        res[x][y] = i;
    }
    for (auto &row: res) {
        for (auto &index: row)
            cout << index << " ";
        cout << "\n";
    }
}
