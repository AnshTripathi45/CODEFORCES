#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 676767677;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        long long sum = 0;
        int last = -1;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
            if (a[i] > 1) {
                sum += a[i];
                last = i;
            }
        }
 
        // All elements are 1
        if (last == -1) {
            cout << 1 << '
';
            continue;
        }
 
        // Check if there is a 1 after the last element > 1
        bool trailingOne = false;
 
        for (int i = last + 1; i < n; i++) {
            if (a[i] == 1) {
                trailingOne = true;
                break;
            }
        }
 
        if (trailingOne)
            sum++;
 
        cout << sum % MOD << '
';
    }
 
    return 0;
}