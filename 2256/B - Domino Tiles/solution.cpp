#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        // dp[a][b] = ways so far, where a = previous tile, b = current tile
        long long dp[2][2] = {{0,0},{0,0}};
 
        auto allowedFirst  = [&](int val) { return s[0] == '?' || (s[0]-'0') == val; };
        auto allowedSecond = [&](int val) { return s[1] == '?' || (s[1]-'0') == val; };
 
        for (int a = 0; a <= 1; a++) {
            if (!allowedFirst(a)) continue;
            for (int b = 0; b <= 1; b++) {
                if (!allowedSecond(b)) continue;
                dp[a][b] = 1;
            }
        }
 
        for (int i = 2; i < n; i++) {
            long long ndp[2][2] = {{0,0},{0,0}};
            for (int a = 0; a <= 1; a++) {
                for (int b = 0; b <= 1; b++) {
                    if (dp[a][b] == 0) continue;
                    for (int c = 0; c <= 1; c++) {
                        if (s[i] != '?' && (s[i]-'0') != c) continue;
                        int prevWeight = a + b;
                        int newWeight  = b + c;
                        if (prevWeight == newWeight) continue; // clash, skip
                        ndp[b][c] = (ndp[b][c] + dp[a][b]) % MOD;
                    }
                }
            }
            memcpy(dp, ndp, sizeof(dp));
        }
 
        long long ans = 0;
        for (int a = 0; a <= 1; a++)
            for (int b = 0; b <= 1; b++)
                ans = (ans + dp[a][b]) % MOD;
 
        cout << ans << "
";
    }
    return 0;
}