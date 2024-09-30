#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <queue>

using namespace std;

int n, temp, max_;
ostringstream oss;

int main() {
    cin >> n;
    vector<priority_queue<int>> mem(n, priority_queue<int>());
    vector<int> m(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> m[i];
        for (int j = 0; j < m[i]; ++j) {
            cin >> temp;
            mem[i].push(temp);
        }
    }
    for (int i = 0; i < n; ++i) {
        bool T = true;
        max_ = mem[i].top();
        mem[i].pop();
        for (int j = 1; j < m[i]; ++j) {
            if (max_ % mem[i].top() != 0) {
                oss << "No" << "\n";
                T = false;
                break;
            }
            mem[i].pop();
        }
        if (T)oss << "Yes" << "\n";
    }
    cout << oss.str();
}
