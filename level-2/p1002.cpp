#include <iostream>
#include <vector>

using namespace std;

int mx, my, hx, hy, nx, ny;

int main() {
    cin >> mx >> my >> hx >> hy;
    int ban[9][2] = {{-2, 1},
                     {-1, -2},
                     {-1, 2},
                     {-2, -1},
                     {0,  0},
                     {2,  1},
                     {1,  -2},
                     {1,  2},
                     {2,  -1}};
    vector<vector<long long>> dp(mx + 1, vector<long long>(my + 1, 0));
    vector<vector<bool>> house(mx + 1, vector<bool>(my + 1, false));
    for (auto &i: ban) {
        nx = hx + i[0];
        ny = hy + i[1];
        if (nx >= 0 && ny >= 0 && nx <= mx && nx <= my)
            house[nx][ny] = true;
    }
    for (int i = 0; i <= mx; i++) {
        for (int j = 0; j <= my; j++) {
            if (i == 0 && j == 0) dp[i][j] = 1;
            else if (house[i][j])
                dp[i][j] = 0;
            else {
                if (i > 0) dp[i][j] += dp[i - 1][j];
                if (j > 0) dp[i][j] += dp[i][j - 1];
            }
        }
    }
    cout << dp[mx][my] << "\n";
}

