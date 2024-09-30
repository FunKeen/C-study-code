#include <iostream>
#include <vector>

using namespace std;

int n, k, temp;
int count = 0;
vector<int> arr;
vector<int> num;

bool is_prim(int x) {
    if (x <= 1) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i += 2)
        if (x % i == 0) return false;
    return true;
}

void dfs(int x) {
    if (x > n) return;
    if (arr.size() == k) {
        int res = 0;
        for (int i = 0; i < k; i++) {
            res += arr[i];
        }
        if (is_prim(res))
            count += 1;
        return;
    }
    dfs(x + 1);
    arr.push_back(num[x]);
    dfs(x + 1);
    arr.pop_back();
}


int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        num.push_back(temp);
    }
    dfs(0);
    cout << count;
}
