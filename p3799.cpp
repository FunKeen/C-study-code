#include <iostream>
#include <vector>

using namespace std;

int n, temp;
int count = 0;
vector<int> num(5010, 0);
vector<int> nums(100010);
vector<int> yes_nums(5010, 0);

vector<int> n_(16, 1);

int C(int n1, int m1) {
    int res;
    res = n_[m1] / (n_[m1] - n_[n1]);
    return res;
}

int main() {
    cin >> n;
    for (int i = 1; i < 16; i++)
        n_[i] = n_[i - 1] * i;
    for (int x: n_) cout << x << " ";
    cout << "\n";
//    for (int i = 0; i < n; i++) {
//        cin >> temp;
//        num[temp] += 1;
//        nums.push_back(temp);
//    }
//    for (int x: nums) {
//        for (int y: nums) {
//            int re = x + y;
//            if (re <= 5000)
//                yes_nums[x + y] += 1;
//        }
//    }
//    for (int i = 2; i < num.size(); i++) {
//        if (num[i] > 1)
//            count += C(2, i) * yes_nums[i];
//    }
//    cout << count << "\n";
}
