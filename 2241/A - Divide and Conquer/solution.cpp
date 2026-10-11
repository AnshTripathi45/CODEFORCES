#include <bits/stdc++.h>
using namespace std;
 
bool check(int x, int y) {
    if (x == 1)
        return y == 1;
 
    if (x % y != 0)
        return false;
 
    while (x > 1) {
        int p = 0;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                p = i;
                break;
            }
        }
 
        if (p == 0) { // x is prime
            p = x;
        }
 
        while (x % p == 0)
            x /= p;
 
        while (y % p == 0)
            y /= p;
    }
 
    return y == 1;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int x, y;
        cin >> x >> y;
 
        cout << (check(x, y) ? "YES
" : "NO
");
    }
 
    return 0;
}