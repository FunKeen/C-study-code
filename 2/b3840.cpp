#include <iostream>

using namespace std;

bool is_prim(int n) {
    if (n == 2 || n == 3) return true;
    else if (n % 2 == 0 || n % 3 == 0) return false;
    else for (int i = 3; i * i <= n; i += 2) if (n % i == 0) return false;
    return true;
}


int main() {
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (is_prim(i)) count += 1;
    cout << count << "\n";
}
