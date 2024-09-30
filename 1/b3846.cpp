#include <iostream>

using namespace std;

bool isr(int n) {
    if (n % 400 == 0 || n % 100 != 0 && n % 4 == 0) return true;
    return false;
}

int main() {
    int n, m;
    int sum = 0;
    cin >> n >> m;
    for (int i = n+1; i <= m; i++) {
        if (isr(i)) sum += i;
    }
    cout << sum << endl;
    return 0;
}
