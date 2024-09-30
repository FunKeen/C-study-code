#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, d, id;
    cin >> n >> d;
    int N[n];
    for (int i = 0; i < n; i++) N[i] = 0;
    for (int i = 1; i <= d; i++) {
        cin >> id;
        N[id] += i;
    }
    for (int x: N) cout << x << " ";
    cout << "\n";
}
