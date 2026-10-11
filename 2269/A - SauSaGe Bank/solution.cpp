#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    while(k--){
        int n,t;
        cin>>n>>t;
        long long ans =(1LL<<(n-t+1))+2LL*(t-1);
        cout<<ans<<endl;
 
 
    }
    return 0;
}