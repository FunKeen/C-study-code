#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int count_num(int num) {
    vector<int> temp;
    while (num > 0) {
        temp.push_back(num % 10);
        num /= 10;
    }
    auto minmax = minmax_element(temp.begin(), temp.end());
    return (*minmax.second - *minmax.first);
}

int main() {
    int n;
    cin >> n;
    int res[10] = {0, 5, 4, 3, 1, 2, 3, 4, 5, 6};
    cout << res[count_num(n) - 1] << "\n";
}
