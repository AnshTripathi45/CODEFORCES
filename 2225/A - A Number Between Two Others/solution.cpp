#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
      long long x,y,z;
      cin>>x>>y;
      if(y%x==0&&x*2!=y){
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    }
    return 0;
}