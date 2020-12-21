/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
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

// fast io
#define FIO()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using namespace std;

void solution()
{

    // This is the main code
    string ans = "";
    int n, x = 0, y = 0, a, b;
    cin >> n;
    forn(i, 0, n)
    {
        cin >> a >> b;
        if (abs(a + x - y) <= 500)
        {
            x += a;
            ans += "A";
        }
        else
        {
            y += b;
            ans += "G";
        }
    }
    if (abs(x - y) > 500)
        cout << -1;
    else
        cout << ans;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt", "r", stdin);
    freopen("E:/CP/output.txt", "w", stdout);
#endif

    FIO()

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}