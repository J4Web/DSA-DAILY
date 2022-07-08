//B
#include<bits/stdc++.h>
#define int long long
using namespace std;
void begin() {
    int n; cin >> n;
    //Write your code here
    vector<int> o, s;
    for (int i = 1; i < n + 1; i++)
    {
        o.push_back(i);
    }
    int i = 0;
    while (i < n)
    {
        while (i < n && o[i] == -1) i = i + 1;
        if (i < n)
        {
            int val = o[i];
            while (val <= n)
            {
                o[val - 1] = -1;
                s.push_back(val);
                val *= 2;
            }
        }
    }
    cout << 2 << "\n";
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
 
    }
    cout << "\n";
 
    return;
}
int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        begin();
    }
    return 0;
}
