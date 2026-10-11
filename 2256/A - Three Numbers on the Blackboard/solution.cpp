#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int mx ;
         int mn;
         int range =0;
        int a,b,c;
        cin>>a>>b>>c;
    
          if(a+b<c){
            c=a+b;
            mx = max({a,b,c});
            mn= min({a,b,c});
            range =mx-mn;
            
            
         }
         else if(a+c<b){
            b=a+c;
             mx = max({a,b,c});
            mn= min({a,b,c});
            range =mx-mn;
              
         }
 
         else if(c+b<a){
            a=c+b;
             mx = max({a,b,c});
            mn= min({a,b,c});
            range =mx-mn;
              
         }
           if(a+b>c||a+c>b||b+c>a){
            mx = max({a,b,c});
            mn= min({a,b,c});
            range =mx-mn;
        
         }
         cout<<range<<endl;
        
       
    
       }
    return 0;
}