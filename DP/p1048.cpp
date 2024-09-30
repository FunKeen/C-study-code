#include <iostream>
#include <vector>

using namespace std;


int main() {
    int t, m;
    cin >> t >> m;
    vector<vector<int>> dp(t + 1, vector<int>(m + 1, 0));
    vector<int> time(m + 1, 0);
    vector<int> value(m + 1, 0);
    for (int i = 1; i <= m; ++i) {
        cin >> time[i] >> value[i];
    }
    for (int i = 1; i <= t; i++) {
        for (int j = 1; j <= m; j++) {
            if (i < time[j])
                dp[i][j] = dp[i][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - time[j]][j - 1] + value[j]);
        }
    }
    cout << dp[t][m] << "\n";
    return 0;
}