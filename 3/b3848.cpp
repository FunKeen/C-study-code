#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, temp, money, count = 0;
    cin >> n;
    vector<int> mark(6);
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mark[i]=temp;
    }
    cin >> money;
    for (int x: mark) {
        if (money >= x) {
            money -= x;
            count += 1;
        }
    }
    cout << count << "\n";
}
