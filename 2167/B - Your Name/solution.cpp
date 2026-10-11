#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s, r;
        cin >> s;
        cin >> r;
 
        sort(s.begin(), s.end());
        sort(r.begin(), r.end());
 
        if (s == r) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
 
    return 0;
}