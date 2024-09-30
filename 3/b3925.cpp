#include <iostream>
#include <sstream>

using namespace std;

long long n, ii;


int main() {
    cin >> n >> ii;
    long long round = 1;
    while (true) {
        bool T = true;
        long long count = round++;
        count = count * n + ii;
        for (int i = 2; i <= n; i++) {
            if (count % (n - 1) == 0) {
                count = count * n / (n - 1) + ii;
            } else {
                T = false;
                break;
            }
        }
        if (T) {
            cout << count << "\n";
            break;
        } else
            continue;
    }
}
