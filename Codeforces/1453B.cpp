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

// fast io
#define FIO()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using namespace std;

void solution()
{

    // This is the main code

    int n;
    cin >> n;
    ll a[n + 1];
    forn(i, 0, n) cin >> a[i];
    ll sum = 0, cnt = 9223372036854775241;
    vector<ll> ans(n + 1, 0);
    vector<ll> dif(n + 1, 0);
    ll x = -1;
    rforn(i, n - 2, 0)
    {
        dif[i] = abs(a[i + 1] - a[i]);
        sum += dif[i];
    }
    forn(i, 0, n)
    {
        if (i == n - 1)
        {
            ans[i] = sum - abs(a[n - 1] - a[n - 2]);
        }
        else if (i == 0)
        {
            ans[i] = sum;
            ans[i] -= abs(a[1] - a[0]);
        }
        else
        {
            ll y = sum;
            y -= (abs(a[i] - a[i - 1]) + abs(a[i] - a[i + 1]));
            ans[i] = y + abs(a[i - 1] - a[i + 1]);
        }
        if (cnt > ans[i])
            cnt = ans[i];
    }
    cout << cnt << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt", "r", stdin);
    freopen("E:/CP/output.txt", "w", stdout);
#endif

    FIO()

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}