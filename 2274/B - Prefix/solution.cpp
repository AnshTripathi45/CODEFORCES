#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        ll mx = a[0], mn = a[0];  // max and min reachable prefix sums
        ll ans = a[0];
 
        for (int i = 1; i < n; i++) {
            // best value a[i] can become
            ll best = max(llabs(mx), llabs(mn));
            ans = max(ans, a[i] + best);
 
            // update reachable prefix sums
            ll nmx = max({a[i], mx + a[i], 2 * mx + a[i]});
            ll nmn = min({a[i], mn + a[i], 2 * mn + a[i]});
            mx = nmx;
            mn = nmn;
        }
 
        cout << ans << "
";
    }
    return 0;
}