/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long

//STL
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define all(v) v.begin(), v.end()

//loops
#define forn(i, a, b) for (int i = a; i < b; i++)
#define rforn(i, a, b) for (int i = a; i >= b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// // fast io
// #define FIO()                     
//     ios_base::sync_with_stdio(0); 
//     cin.tie(0);

using namespace std;

void solution()
{

    // This is the main code

    int n, t;
    cin >> n >> t;
    map<int, vector<int>> ind;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        ind[num].pb(i);
    }

    for (auto ele : ind)
    {

        int x = t - ele.first;
        if (x == ele.first)
        {
            int x = 0;
            for (auto i : ele.second)
                if (!x)
                    arr[i] = 1, x ^= 1;
                else
                    arr[i] = 0, x ^= 1;
            continue;
        }
        for (auto i : ele.second)
            arr[i] = 0;
        if (x >= 0)
            for (auto i : ind[x])
                arr[i] = 1;
    }

    for (auto ele : arr)
        cout << ele << " ";
    cout << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt", "r", stdin);
    freopen("E:/CP/output.txt", "w", stdout);
#endif

    // FIO()

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}