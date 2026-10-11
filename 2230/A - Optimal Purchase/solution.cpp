#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
 
        long long groups = n / 3;
        long long remainder = n % 3;
 
        long long total = groups * min(3 * a, b);
        if (remainder > 0) {
            total += min(remainder * a, b);
        }
 
        cout << total << endl;
    }
    return 0;
}