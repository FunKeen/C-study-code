#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 3; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double c = sqrt(i * i + j * j);
            if (c > n) break;
            else if (c == (int) c) count += 1;
        }
    }
    cout << count << "\n";
    return 0;
}
