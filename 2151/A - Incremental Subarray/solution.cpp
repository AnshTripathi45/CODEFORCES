#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++) cin >> a[i];
 
        bool consecutive = true;
        for (int i = 1; i < m; i++) {
            if (a[i] != a[i-1] + 1) {
                consecutive = false;
                break;
            }
        }
 
        long long ans;
        if (consecutive) {
            ans = (long long)n - a[m-1] + 1;
        } else {
            ans = 1;
        }
 
        cout << ans << "
";
    }
    return 0;
}