#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> both, only2, only3, none;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            bool has2 = (x % 2 == 0);
            bool has3 = (x % 3 == 0);
 
            if (has2 && has3)
                both.push_back(x);
            else if (has2)
                only2.push_back(x);
            else if (has3)
                only3.push_back(x);
            else
                none.push_back(x);
        }
 
        // One optimal ordering
        for (int x : both)
            cout << x << ' ';
 
        for (int x : only2)
            cout << x << ' ';
 
        for (int x : none)
            cout << x << ' ';
 
        for (int x : only3)
            cout << x << ' ';
 
        cout << '
';
    }
 
    return 0;
}