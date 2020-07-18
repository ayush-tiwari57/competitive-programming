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
    int n;
    cin>>n;
    double dp[n+1][n+1],a[n+1];
    forn(i,1,n+1) cin>>a[i];
    memset(dp,0.0,sizeof(dp));
    dp[0][0]=1.0;
    forn(i,1,n+1){
        forn(j,0,i+1){
            if(j==0) dp[i][j]=dp[i-1][j]*(1.0-a[i]);
            else dp[i][j]=dp[i-1][j]*(1.0-a[i])+dp[i-1][j-1]*a[i];
        }
    }
    double ans=0.0;
    forn(i,(n+1)/2,n+1) ans+=dp[n][i];
    cout<<setprecision(9)<<ans;
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