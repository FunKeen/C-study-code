#include <iostream>

using namespace std;

int main() {
    int k, l, r, sum = 0;
    cin >> k >> l >> r;
    for (int i = l; i <= r; i++) if (i % 10 == k || i % k == 0) sum += i;
    cout << sum << endl;
    return 0;
}