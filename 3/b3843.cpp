#include <iostream>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;
    str += ',';
    bool a = false, b = false, c = false, d = false, st = true;
    int len = 0;
    vector<char> passwd;
    for (char x: str) {
        if (x == ',' || x == '\n') {
            if (6 <= len && len <= 12 && (a + b + c) > 1 && d && st) {
                for (char ch: passwd) cout << ch;
                cout << "\n";
            }
            passwd.clear();
            a = false, b = false, c = false, d = false, st = true;
            len = 0;
            continue;
        } else if (x >= 'a' && x <= 'z') a = true;
        else if (x >= 'A' && x <= 'Z') b = true;
        else if (x >= '0' && x <= '9') c = true;
        else if (x == '!' || x == '@' || x == '#' || x == '$') d = true;
        else st = false;
        passwd.push_back(x);
        len++;
    }
}
