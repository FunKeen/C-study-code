#include <iostream>
#include <cmath>

using namespace std;

int split_num(int num) {
    int res = 0;
    if (num == 0) {
        return 0;
    }

    int length = 0, temp = num;
    while (temp > 0) {
        temp /= 10;
        length++;
    }


    while (num > 0) {
        res += (int) pow(num % 10, length);
        num /= 10;
    }

    return res;
}

int main() {
    int n, m, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m == split_num(m)) cout << 'T' << "\n";
        else cout << 'F' << "\n";
    }
}
