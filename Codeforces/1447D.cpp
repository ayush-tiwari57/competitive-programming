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

int dp[5001][5001];
string s1,s2;
int n,m,ans=0;

void solution(){

    // This is the main code
    cin>>n>>m;
    cin>>s1;
    cin>>s2;
    memset(dp,0,sizeof(dp));
    int ans=0;
    forn(i,1,n+1){
        forn(j,1,m+1){
            if(s1[i-1]==s2[j-1]) dp[i][j]=max(dp[i][j],dp[i-1][j-1]+2);
            else dp[i][j]=max(dp[i][j],max(dp[i-1][j]-1,dp[i][j-1]-1));
            ans=max(ans,dp[i][j]);
        }
    }
    cout<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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