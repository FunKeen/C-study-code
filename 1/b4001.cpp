#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 1; i < 30; i++)
        if (i * i * i == n) {
            cout << "Yes" << endl;
            return 0;
        }
    cout << "No" << endl;
    return 0;
}