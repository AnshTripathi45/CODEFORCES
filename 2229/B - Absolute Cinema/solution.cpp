#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n), b(n);
 
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
 
        long long sum = 0;
 
        for (int i = 0; i < n; i++) {
            sum += max(a[i], b[i]);
        }
 
        long long ans = sum;
 
        for (int i = 0; i < n; i++) {
            ans = max(ans, sum + min(a[i], b[i]));
        }
 
        cout << ans << '
';
    }
}