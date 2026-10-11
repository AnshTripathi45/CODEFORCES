#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int k;
        cin >> k;
 
        long long sum = 0;
 
        for (int i = 0; i < k; i++) {
            long long c;
            cin >> c;
            sum += c;
        }
 
        if (sum > k + 1)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}