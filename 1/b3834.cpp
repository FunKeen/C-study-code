#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int count = 1;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) count += 1;
    }
    cout << count << endl;
    return 0;
}