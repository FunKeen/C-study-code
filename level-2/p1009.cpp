#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 高精度加法
vector<int> add(const vector<int>& a, const vector<int>& b) {
    int len1 = a.size(), len2 = b.size();
    int maxLen = max(len1, len2);

    vector<int> result(maxLen + 1, 0); // 结果可能多一位

    int carry = 0; // 进位
    for (int i = 0; i < maxLen; ++i) {
        int digitA = i < len1 ? a[i] : 0;
        int digitB = i < len2 ? b[i] : 0;
        int sum = digitA + digitB + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry != 0) {
        result[maxLen] = carry;
    }

    // 去除前导0
    if (result.back() == 0) {
        result.pop_back();
    }

    return result;
}

// 高精度数乘以普通整型
vector<int> multiply(const vector<int>& a, int b) {
    if (b == 0) {
        return vector<int>(1, 0);
    }

    int len = a.size();
    vector<int> result(len + 10, 0); // 结果最多扩展10位

    long long carry = 0;
    for (int i = 0; i < len; ++i) {
        carry += (long long)a[i] * b;
        result[i] = carry % 10;
        carry /= 10;
    }

    int i = len;
    while (carry != 0) {
        result[i++] = carry % 10;
        carry /= 10;
    }

    // 去除前导0
    while (result.back() == 0 && result.size() > 1) {
        result.pop_back();
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> sum(1, 0); // 高精度数的初始化，初始和为0
    vector<int> factorial(1, 1); // 保存当前的阶乘，1! 初始化为1

    for (int i = 1; i <= n; ++i) {
        factorial = multiply(factorial, i); // 计算i!
        sum = add(sum, factorial); // 加到当前的和中
    }

    // 将结果逆序输出
    for (int i = sum.size() - 1; i >= 0; --i) {
        cout << sum[i];
    }
    cout << endl;

    return 0;
}
