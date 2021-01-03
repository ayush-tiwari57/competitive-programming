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
#define maxn 2004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

char a[maxn][maxn];
int dp[maxn][maxn],n,m;

int dfs(int x,int y){
    if(x>=n|| y>=m || a[x][y]=='#') return 0;
    if(x==n-1 && y==m-1) return 1;
    if(dp[x][y]!=-1)  return dp[x][y];
    dp[x][y]=(dfs(x+1,y)+dfs(x,y+1))%Mod;
    return dp[x][y];
    
    
}

void solution(){

    // This is the main code
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    forn(i,0,n){
        forn(j,0,m) cin>>a[i][j];
    }
    cout<<dfs(0,0)%Mod;
    
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