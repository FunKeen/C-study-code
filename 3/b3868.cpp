#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string strs[n], str;
    bool o2, o8, o10, o16;
    ostringstream oss;
    for (int i = 0; i < n; i++) {
        cin >> str;
        strs[i] = str;
    }
    for (int i = 0; i < n; i++) {
        o2 = true, o8 = true, o10 = true, o16 = true;
        for (char ch: strs[i]) {
            if (ch > 'F') o16 = false;
            if (ch > '9') o10 = false;
            if (ch > '7') o8 = false;
            if (ch > '1') o2 = false;
        }
        oss << o2 << " " << o8 << " " << o10 << " " << o16 << "\n";
    }
    cout << oss.str();
}
