#include <iostream>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

long long n;


int main() {
    cin >> n;
    vector<vector<string>> mem(n, vector<string>(5));
    map<string, int> t;
    t["km"] = 3;
    t["m"] = 2;
    t["mm"] = 1;
    t["kg"] = 3;
    t["g"] = 2;
    t["mg"] = 1;

    for (int i = 0; i < n; ++i) {
        cin >> mem[i][0] >> mem[i][1] >> mem[i][2] >> mem[i][3] >> mem[i][4];
        if (mem[i][0] == "0") mem[i][3] = "0";
        else {
            mem[i][3] = mem[i][0];
            for (int j = 0; j < t[mem[i][1]] - t[mem[i][4]]; j++) {
                mem[i][3] += "000";
            }
        }
    }
    for (int i = 0; i < n; ++i)
        cout << mem[i][0] << " " << mem[i][1] << " " << mem[i][2] << " " << mem[i][3] << " " << mem[i][4] << "\n";
}
