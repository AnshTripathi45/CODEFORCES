#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        char buf[200005];
        scanf("%s", buf);
        
        vector<int> cnt(k, 0);
        for(int i = 0; i < n; i++){
            if(buf[i] == '1'){
                cnt[i % k]++;
            }
        }
        
        bool ok = true;
        for(int r = 0; r < k; r++){
            if(cnt[r] % 2 != 0){
                ok = false;
                break;
            }
        }
        
        printf(ok ? "YES
" : "NO
");
    }
    return 0;
}