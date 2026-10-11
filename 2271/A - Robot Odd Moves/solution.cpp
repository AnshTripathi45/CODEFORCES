#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if ((a - b) % 2 == 0)
            cout << (b <= a ? a : -1) << "
";
        else
            cout << (b <= a + 1 ? a + 1 : -1) << "
";
    }
}