#include <iostream>
#include <cmath>

using namespace std;

void time_print(int ss) {
    int h, m, s;
    s = ss % 60;
    m = ss / 60 % 60;
    h = ss / 3600;
    cout << h << " " << m << " " << s << endl;
}

int main() {
    int h, m, s, bs;
    cin >> h >> m >> s >> bs;
    time_print(((h * 60) + m) * 60 + s + bs);
    return 0;
}