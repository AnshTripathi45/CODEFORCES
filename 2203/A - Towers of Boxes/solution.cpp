#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;
 
        int k = d / m + 1;
 
        cout << (n + k - 1) / k << '
';
    }
}