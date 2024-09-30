#include <iostream>

using namespace std;

int main() {
    int a, b, m, n;
    cin >> a >> b >> m >> n;
    int res[n], count = a + b;
    res[0] = a;
    res[1] = b;
    for (int i = 2; i < n; i++) {
        res[i] = res[i - 1] + res[i - 2];
        count += res[i];
        if (res[i] >= m) break;
    }
    cout << count << "\n";
}
