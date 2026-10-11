#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        if (n == 1) {
            cout << 1 << endl;
        }
        else if (n == 2) {
            cout << -1 << endl;
        }
        else {
            cout << 1 << " " << 2 << " " << 3 << " ";
 
            long long x = 6;
 
            for (int i = 4; i <= n; i++) {
                cout << x << " ";
                x *= 2;
            }
 
            cout << endl;
        }
    }
 
    return 0;
}