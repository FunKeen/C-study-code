#include <iostream>
#include <sstream>

using namespace std;

int n;
string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", temp1, temp2;
ostringstream oss;

int main() {
    cin >> n;
    n%=26;
    for (int i = n; i < 26; ++i) {
        temp1 += str[i];
    }
    for (int i = 0; i < n; ++i) {
        temp2 += str[i];
    }

    cout << temp1 << temp2 << "\n";
}
