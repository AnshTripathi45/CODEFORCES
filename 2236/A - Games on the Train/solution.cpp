#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
      int n;
      cin>>n;
      int arr[n];
      int diff=0;
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
     
 
int mi = *min_element(arr, arr + n);
int mx = *max_element(arr, arr + n);
      diff=mx-mi;
      if(diff!=0){
  
   cout<<diff+1<<endl;
}
else{
  cout<<"1"<<endl;
}}
    return 0;
}