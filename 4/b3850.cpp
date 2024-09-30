#include <iostream>

using namespace std;

int main() {
    long long n, mem;
    cin >> n;
    int map[10] = {0, 7, 5, 3, 1, 8, 6, 4, 2, 9};
    for (int i = 0; i < n; ++i) {
        cin >> mem;
        long long count = 0;
        bool is = true;
        while (mem > 0) {
            long long temp = mem % 10;
            mem /= 10;
            if (is)
                count += map[temp];
            else
                count += temp;
            is = !is;
        }
        if (count % 8 == 0)
            cout << "T\n";
        else
            cout << "F\n";
    }
}
