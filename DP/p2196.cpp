#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    vector<int> mem(n + 1, 0);
    vector<int> ro(n + 1, 0);
    vector<int> res;
    vector<vector<int>> road(n, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; ++i) {
        cin >> mem[i];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = i; j < n; ++j)
            cin >> road[i][j + 1];
    }
    dp[1] = mem[1];
    for (int i = 1; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j)
            if (road[i][j]) {
                dp[j] = max(dp[j], dp[i] + mem[j]);
                ro[j] = i;
            }
    }

    for (int i = n; i > 0;)
        if (ro[i] != 0) {
            res.push_back(i);
            i = ro[i];
        } else {
            res.push_back(i);
            break;
        }
    for (int i = res.size()-1; i >= 0;--i) cout << res[i] << " ";
    cout << "\n" << dp[n] << "\n";
    return 0;
}