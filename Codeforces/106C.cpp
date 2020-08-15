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
    int dp[10000];
    int n, m, a, b, c, d;
    cin>>n>>m>>c>>d;
    for(int i=c; i<=n; i++)
        dp[i]=dp[i-c]+d;
    for(int o=0; o<m; o++){
        cin>>a>>b>>c>>d;
        for(int i=0; i<a/b; i++)
            for(int j=n; j>=c; j--)
                dp[j]=max(dp[j-c]+d, dp[j]);
    }
    cout<<dp[n];


}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}