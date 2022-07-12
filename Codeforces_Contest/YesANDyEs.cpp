#include<bits/stdc++.h>
#define int long long
using namespace std;
void begin() {
    string s; cin >> s;
    //Write your code here
    char a[] = {'Y', 'y', 'E', 'e', 'S', 's'};
    int i = 0;
    bool no = true;
    for (auto p : s)
    {
        if (p == a[i] || p == a[i + 1])
        {
            i += 2;

        }
        else {
            no = false;
            break;
        }
    }
    if (no)
    {
        cout << "YES\n";
        return;
    }
    else {
        cout << "NO\n";
        return;
    }


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


//3 sum closest

// class Solution {
// public:
//     int fun(int arr[], int n, int t)
//     {
//         unordered_map<int, pair<int, int>> m;
//         unordered_map<int, int> freq;

//         for (int i = 0 ; i < n; i++) {
//             Freq[arr[i]]++;
//             for (int j = 0 ; j < i ; j++) {
//                 m[arr[i] + arr[j]] = {arr[i], arr[j]};
//             }
//         }
//         sort(arr, arr + n)
//         tuple<int> a = { -1, -, 1 - 1} , mine = INT_MAX;
//         for (auto x : m) {
//             Int find = t - x.first;
//             Int idx = lower_bound(arr, arr + n, find) - arr;
//             unordered_map<int, int> check;
//             Check[arr[idx]]++;
//             Check[x.second.first]++;
//             Check[x.second.second]++;
//             if (Check[arr[idx]] < m[arr[idx]] and .Check[x.second.first] < m[x.second.first] and check[x.second.second] < m[x.second.second]) {
//                 Int diff = find - arr[idx]
//                 if (diff < mine) {
//                     Mine = diff;
//                     Tuple = {arr[idx], x.second.first, x.second.second};
//                 }
//             }
//         }
//         return arr[idx] + x.second.first + x.second.second
//     }

// };

