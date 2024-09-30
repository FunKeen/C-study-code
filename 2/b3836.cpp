#include <iostream>

using namespace std;

int main() {
    int x, y, z, n, m, count = 0;
    cin >> x >> y >> z >> n >> m;
    int for_i, for_j;
    for_i = n / x;
    for_j = n / y;
    for (int i = 0; i <= for_i; i++) {
        for (int j = 0; j <= for_j; j++) {
            int spent = x * i + y * j;
            if (spent > n) break;
            else if ((n - spent) * z + i + j == m) count += 1;
        }
    }
    cout << count << "\n";
}