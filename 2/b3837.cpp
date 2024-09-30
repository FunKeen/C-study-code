#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int n;
    char ch = 65;
    cin >> n;
    ostringstream oss;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            oss << ch++;
            if (ch == 91) ch = 65;
        }
        oss << "\n";
    }
    cout << oss.str();
}