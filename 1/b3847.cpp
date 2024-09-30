#include <iostream>

using namespace std;

int main() {
    int h, m, s;
    string ap;
    cin >> h >> m >> s >> ap;
    int time = ((h * 60 + m) * 60) + s;
    if (ap == "A") cout << time << endl;
    else if (ap == "P") cout << time + 43200 << endl;
    return 0;
}