#include <iostream>

using namespace std;

int main() {
    int n, k, temp, count = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        temp = i;
        while (temp > 0) {
            if (temp % 10 == k) count += 1;
            temp /= 10;
        }
    }
    cout << count << "\n";
}
