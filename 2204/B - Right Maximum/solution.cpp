#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n), pos(n);
        int mx = 0, p = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
            if (a[i] >= mx) {
                mx = a[i];
                p = i;
            }
 
            pos[i] = p;
        }
 
        int ans = 0;
        int r = n - 1;
 
        while (r >= 0) {
            ans++;
            r = pos[r] - 1;
        }
 
        cout << ans << '
';
    }
}