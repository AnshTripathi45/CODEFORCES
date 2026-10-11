#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        long long n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
 
        long long c4 = 0, c8 = 0;
        for(char ch : s){
            if(ch == '4') c4++;
            else c8++;
        }
 
        long long ax = llabs(x), ay = llabs(y);
        long long need = max(0LL, ax - c8) + max(0LL, ay - c8);
 
        cout << (need <= c4 ? "YES" : "NO") << "
";
    }
    return 0;
}