#include <iostream>

using namespace std;

int main() {
    int x, y, z, money;
    cin >> x >> y >> z >> money;
    int have = 2 * x + 5 * y + 3 * z - money;
    if (have > 0) cout << "No\n" << have << endl;
    else cout << "Yes\n" << abs(have) << endl;
    return 0;
}