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
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


void solution(){

    // This is the main code
    int n;
    cin>>n;
    vector<int> a(n);
    forn(i,0,n) cin>>a[i];
    vector<int> pos;
    for(int i=0;i<n;i++) if(a[i]==1) pos.pb(i); 
    int k=pos.size();
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, INT_MAX));
	dp[0][0] = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j <= k; j++)
		{
		 	if(dp[i][j] == INT_MAX) continue;
		 	dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
		 	if(j < k && a[i] == 0)
		 		dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + abs(pos[j] - i));
		}
	cout << dp[n][k] << endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}