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
int func(int n)
{
    int cnt = 0;
    
    while ((n&1) == 0)
    {
        cnt++;
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            cnt++;
            n = n / i;
        }
    }

    if (n > 2)
        cnt++;
    return cnt;
}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt", "r", stdin);
    freopen("D:/competitive-programming/output.txt", "w", stdout);
#endif

    FIO()

    int t = 1;
    cin >> t;
    while (t--)
    {
            int a, b, k;
        cin >> a >> b >> k;
        bool flag = 0;
        int sa, sb;
        sb = func(b);
        sa = func(a);
        // if(a!=1) msa++;
        if (a == 1 && b == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (k == 1)
            flag = (a % b == 0 || b % a == 0) && a != b;
            // if(a % b == 0 || b % a == 0 && a!=b){
            //     if(a!=b) flag=1;
            // }
        else if (b == 1)
            flag = (sa >= k);
        else if (a == 1)
            flag = (sb >= k);
        else if (k == 2)
            flag = 1;
        else
            flag = ((sa + sb) >= k);

        if (!flag)
            cout << "NO"<<endl;
        else
            cout << "YES"<<endl;
    }
    return 0;
}