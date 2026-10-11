#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int zeros = 0, negs = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) zeros++;
            else if (arr[i] == -1) negs++;
        }
 
        int ops = zeros;
        if (negs % 2 != 0) {
            ops += 2;
        }
 
        cout << ops << endl;
    }
    return 0;
}