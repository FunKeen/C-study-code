#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int n, sum = 0;
string str;

int main() {
    cin >> n;
    unordered_map<char, int> mymap;
    for (char i = 'a'; i <= 'z'; ++i) {
        mymap[i] = i - 96;
    }
    for (char i = 'A'; i <= 'Z'; ++i) {
        mymap[i] = -i;
    }
    cin >> str;
    for (char x: str)
        sum += mymap[x];
    cout << sum << "\n";
}
