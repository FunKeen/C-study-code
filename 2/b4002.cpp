#include <iostream>
#include <sstream>
#include <cmath>


using namespace std;

ostringstream oss;

void fun(int num) {
    for (int a = 1; a < num; a++) {
        int b = num - a * a;
        if (b < 1) break;
        int c = static_cast<int>(sqrt(b));
        if (c * c == b) {
            oss << "Yes" << "\n";
            return;
        }
    }
    oss << "No" << "\n";
}

int main() {
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        fun(temp);
    }
    cout << oss.str();
}


//int main() {
//    int n, num, index;
//    cin >> n;
//    ostringstream oss;
//    vector<int> vec;
//    vector<string> res(1000010, "No");
//    for (int i = 1; i < 1000; i++) {
//        vec.push_back(i * i);
//    }
//    for (int i = 0; i < 999; i++) {
//        for (int j = i; j < 999; j++) {
//            index = vec[i] + vec[j];
//            if (index <= 1000000)
//                res[index] = "Yes";
//            else break;
//        }
//    }
//    for (int i = 0; i < n; i++) {
////        cin >> num;
//        oss << res[i] << "\n";
//    }
//    cout << oss.str();
//}
