#include <iostream>

using namespace std;

int main() {
    int m, s, ma, sa;
    cin >> m >> s >> ma >> sa;
    cout << (ma - m) * 60 + sa - s << endl;
    return 0;
}