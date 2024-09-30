#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


bool is_prim(int x) {
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i < x; i += 2) if (x % i == 0) return false;
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = n; i <= m; ++i) {
        if (is_prim(i)) {
            int a = i / 10;
            int b = i % 10;
            if (is_prim(b * 10 + a))
                cout << i << "\n";
        }
    }
}
