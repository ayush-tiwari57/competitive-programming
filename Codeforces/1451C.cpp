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
    int n, k, cnt = 0;
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;
    ll b[26] = {0}, a[26] = {0};
    ll m1 = -1, m2 = -1;
    forn(i, 0, n)
    {
        ll d1 = s1[i] - 'a';
        ll d2 = s2[i] - 'a';
        a[d1]++;
        b[d2]++;
        m2 = max((1ll)*0,max(m2, d2));
        m1 = max((1ll)*0,(max(m1, d1)));
    }
    ll flag = 0;
    cnt = 0;
    if (m1 > m2)
        flag = 2;
    else
    {
        forn(i, 0,25)
        {
            if (a[i] > b[i] && abs(a[i] - b[i]) >= k && (a[i] - b[i]) % k == 0)
            {
                a[i + 1] += (a[i] - b[i]);
                a[i] = b[i];
            }
            else if (a[i] != b[i]){
                flag = 2;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if (flag != 2)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt", "r", stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt", "w", stdout);
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