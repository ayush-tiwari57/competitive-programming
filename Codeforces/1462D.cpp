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

void output(int n,int i){
    n-=i;
    cout << n<< endl;
}

void solution()
{

    // This is the main code
    int n, num;
    cin >> n;
    int a[n + 1];
    forn(i, 0, n) cin >> a[i];
    ll s = 0;
    forn(i, 0, n) s += a[i];

    rforn(i, n, 1) if (s % i == 0)
    {
        num = s / i;
        int flag = 0;
        ll cnt = 0;
        forn(j, 0, n)
        {
            cnt += a[j];
            if (cnt == num)
                cnt = 0;
            else if (cnt > num)
            {
                flag = 1;
                break;
            }
        }
        if (flag==0)
        {
            output(n,i);
            return;
        }
    }
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