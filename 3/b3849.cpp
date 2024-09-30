#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, r;
    string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin >> n >> r;
    vector<int> res;
    res.reserve(10);
    while (n > 0) {
        res.push_back(n % r);
        n /= r;
    }
    reverse(res.begin(), res.end());
    for (int x: res)
        cout << str[x];
}
