#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        char ch[n];
        int count1 = 0;
        int count2 = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> ch[i];
        }
 
        if (n % 2 != 0) {
            cout << "NO" << endl;
        }
        else {
            for (int i = 0; i < n; i++) {
                if (ch[i] == '(')
                    count1++;
                else
                    count2++;
            }
 
            if (count1 == count2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
 
    return 0;
}