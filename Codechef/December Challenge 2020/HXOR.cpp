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
    int n, k, x;
    cin >> n >> x;
    vector<vector<int>> bit_pos(n, vector<int>(32, 0));
    stack<int> mat[32];
    int a[n];

    forn(i, 0, n)
    {
        cin>>a[i];
        k = a[i];
        int cnt = 0;
        while (k)
        {
            if (k & 1)
            {
                bit_pos[i][31-cnt]=1;
            }
            cnt++;
            k = k >> 1;
        }
    }

    forn(i,0,32) {
        mat[i].push(n - 1);
        rforn (j ,n - 2, 0)
            if (bit_pos[j][i]) mat[i].push(j);
    }

    for (int i = 0; i < n - 1 && x; ++i)
        for (int j = 0; j < 32 && x; ++j)
            if (!mat[j].empty() && mat[j].top() == i) {
                x--;
                int q = mat[j].top(); 
                mat[j].pop();
                a[q]^= (1<<31-j);
                // bit_pos[q][j] ^= 1;
                q = mat[j].top(); 
                mat[j].pop();
                a[q]^= (1<<31-j);
                // bit_pos[q][j] ^= 1;
            }
    forn(i,0,n){
        if(n==2 && x%2!=0 && i>=n-2) a[i]^=1;
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt", "r", stdin);
    freopen("E:/CP/output.txt", "w", stdout);
#endif

    FIO()

    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}