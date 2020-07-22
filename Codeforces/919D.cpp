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
#define maxn 300004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

set<int> graph[maxn];
int vis[maxn],dp[maxn][27];
vector<int> ord;
char c[maxn];

void topo(int node){
    vis[node]=1;
    for(auto x: graph[node]){
        if(vis[x]==0) topo(x);
        else if(vis[x]==1){
            cout<<"-1";
            exit(0);
        }
    }
    vis[node]=2;
    ord.pb(node);
}

void dfs(int node,int parent){
    vis[node]=1;
    for(auto x: graph[node]){
        if(!vis[x]) dfs(x,node);
        forn(i,1,27){
            dp[node][i]=max(dp[node][i],dp[x][i]);
        }
    }
    dp[node][c[node]-'a'+1]++;
}

void solution(){

    // This is the main code
    int n,m,u,v;
    // vector<int> ord;
    cin>>n>>m;
    forn(i,1,n+1) cin>>c[i];
    forn(i,0,m){
        cin>>u>>v;
        if(u==v) {
            cout<<"-1";
            exit(0);
        }
        graph[u].insert(v);
    }
    forn(i,1,n+1){
        if(!vis[i]) topo(i);    
    }
    reverse(all(ord));
    memset(vis,0,sizeof(vis));
    for(auto x: ord){
        if(!vis[x]) dfs(x,0);
    }
    int ans=-1;
    forn(i,1,n+1){
        forn(j,1,27){
            // cout<<dp[i][j];
            ans=max(ans,dp[i][j]);
        }
    }
    cout<<ans;
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