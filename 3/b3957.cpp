#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int n, temp, sq, count = 0;

int main() {
    cin >> n;
    vector<int> mem(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> mem[i];
        for (int j = 0; j < i; ++j) {
            temp = mem[i] + mem[j];
            sq = static_cast<int>(sqrt(temp));
            if (sq * sq == temp)
                count += 1;
        }
    }
    cout << count << "\n";
}
