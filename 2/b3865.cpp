#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int n;
    ostringstream oss;
    cin >> n;
    vector<string> str(n, string(n, '-'));
    for (int i = 0; i < n; i++) {
        str[i][i] = '+';
        str[i][n - i - 1] = '+';
        oss << str[i] << "\n";
    }
    cout << oss.str();
}
