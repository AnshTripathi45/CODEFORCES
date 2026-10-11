#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
      int n,x=0;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
     int mx = *max_element(arr, arr + n);
     int mn = *min_element(arr, arr + n);
      x=(mx - mn +1)/2;
      cout<<x<<endl;
 
      
      }
    
    return 0;
}