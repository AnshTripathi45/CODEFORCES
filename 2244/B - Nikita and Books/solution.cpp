#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        long long sum = 0;
        bool ok = 1;
 
        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
            sum += x;
 
            if (sum < 1LL * i * (i + 1) / 2)
                ok = 0;
        }
 
        cout << (ok ? "YES" : "NO") << '
';
    }
}