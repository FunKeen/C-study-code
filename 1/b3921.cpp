#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int time = (n + d) % 7;
    if (time) cout << time << endl;
    else cout << 7 << endl;
    return 0;
}