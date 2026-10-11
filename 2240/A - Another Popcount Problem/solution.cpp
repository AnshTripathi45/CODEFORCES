#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        long long ans = 0;
        long long bit = 1;
 
        while (n >= bit) {
            long long take = min(k, n / bit);
            ans += take;
            n -= take * bit;
            bit *= 2;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}