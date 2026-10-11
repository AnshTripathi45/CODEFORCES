#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        map<int,int> mp;
        int sum = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
            sum += x;
        }
 
        int mx = 0, val = 0;
 
        for (auto p : mp) {
            if (p.second > mx) {
                mx = p.second;
                val = p.first;
            }
        }
 
        int others = n - mx;
 
        if (mx <= others + 1)
            cout << sum << '
';
        else
            cout << sum - (mx - others - 2) * val << '
';
    }
}