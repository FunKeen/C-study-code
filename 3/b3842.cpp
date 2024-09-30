#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, temp, count = 0;
    ostringstream oss;
    cin >> n >> m;
    vector<bool> student(n, true);
    vector<int> stu;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        student[temp] = false;
    }
    for (int i = 0; i < n; i++) {
        if (student[i]) {
            stu.push_back(i);
            continue;
        }
        count += 1;
    }
    if (count == n)
        cout << n;
    else {
        sort(stu.begin(), stu.end());
        for (int x: stu) oss << x << " ";
        cout << oss.str();
    }
}
