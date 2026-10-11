#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
 
        int n;
        cin >> n;
 
        long long a[200005];
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
 
        long long triad[200005];
 
        for (int i = 1; i <= n - 4; i++) {
            triad[i] =
                a[i] + a[i + 2] - a[i + 4];
        }
 
        map<long long, long long> freq;
 
        long long ans = 0;
 
        for (int i = 1; i <= n - 4; i++) {
 
            // Previous triads having same value
            ans += freq[triad[i]];
 
            // i-2 overlaps with current triad
            if (i >= 3 &&
                triad[i - 2] == triad[i]) {
                ans--;
            }
 
            // i-4 overlaps with current triad
            if (i >= 5 &&
                triad[i - 4] == triad[i]) {
                ans--;
            }
 
            freq[triad[i]]++;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}