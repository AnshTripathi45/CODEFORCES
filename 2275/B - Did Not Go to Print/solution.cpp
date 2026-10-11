#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        stack<int> st;
        vector<bool> printed(n + 1, false);
 
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '1')
            {
                // Document i is scanned
                st.push(i);
            }
            else if (s[i - 1] == '2')
            {
                if (!st.empty())
                {
                    // Print top document
                    int doc = st.top();
                    st.pop();
 
                    printed[doc] = true;
                }
                else
                {
                    // Memory empty, print document i
                    printed[i] = true;
                }
            }
            else if (s[i - 1] == '3')
            {
                // Quick print document i
                printed[i] = true;
            }
        }
 
        int count = 0;
 
        for (int i = 1; i <= n; i++)
        {
            if (!printed[i])
            {
                count++;
            }
        }
 
        cout << count << endl;
 
        for (int i = 1; i <= n; i++)
        {
            if (!printed[i])
            {
                cout << i << " ";
            }
        }
 
        cout << endl;
    }
 
    return 0;
}