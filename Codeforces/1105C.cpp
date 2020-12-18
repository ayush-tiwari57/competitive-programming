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
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 200004
#define mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

ll dp[3][200001];
void solution(){

    // This is the main code
    	ll i, j, k, n, m, ct = 0, t, ans = 0, l, r;
	cin >> n >> l >> r;
	ll c[3] = {0};
	l += 2 , r += 3;
	for (i = 0; i < 3; i++) c[i] = (r - i) / 3 - (l - i) / 3;
	/*for (i = 0; i < 3; i++) {
		for (j = 0; j < 100; j++) dp[i][j] = 0;
	}*/
	dp[0][0] = 1;
	for (i = 1; i <= n; i++) {
		dp[0][i] = ((dp[0][i - 1] * c[0]) % mod + (dp[1][i - 1] * c[2]) % mod + (dp[2][i - 1] * c[1]) % mod) % mod;
		dp[1][i] = ((dp[0][i - 1] * c[1]) % mod + (dp[1][i - 1] * c[0]) % mod + (dp[2][i - 1] * c[2]) % mod) % mod;
		dp[2][i] = ((dp[0][i - 1] * c[2]) % mod + (dp[1][i - 1] * c[1]) % mod + (dp[2][i - 1] * c[0]) % mod) % mod;
	}
	cout << dp[0][n] % mod;

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}