#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int mx = 0, cnt = 0;
 
        for (char c : s) {
            if (c == '#')
                cnt++;
            else
                cnt = 0;
 
            mx = max(mx, cnt);
        }
 
        cout << (mx + 1) / 2 << '
';
    }
}