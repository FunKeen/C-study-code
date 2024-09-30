#include <iostream>

using namespace std;

bool isin(int m) {
    int d31[] = {1, 3, 5, 7, 8, 10, 12};
    for (int md: d31) if (m == md) return true;
    return false;
}

int main() {
    int y, m;
    cin >> y >> m;
    if (m == 2)
        if (y%400==0||y%100!=0&&y%4==0) cout << 29 << endl;
        else cout << 28 << endl;
    else if (isin(m)) cout << 31 << endl;
    else cout << 30 << endl;
    return 0;
}