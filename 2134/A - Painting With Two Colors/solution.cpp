#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n,a,b;
    cin>>n>>a>>b;
    if(n%2==b%2){
        if(n%2==a%2){
            cout<<"yes"<<endl;
        }
        else if(a<=b){
        cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
 
        }
 
    }
    else{
        cout<<"no"<<endl;
    }
    }
    return 0;
    }