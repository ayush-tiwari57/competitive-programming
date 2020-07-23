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

vector<pair<int,int>> graph[maxn];
int vis[maxn],dp[maxn],cnt;

void dfs1(int node){
    vis[node]=1;
    for(auto x: graph[node]){
        int child=x.first;
        int check = x.second;
        if(!vis[child]){
            if(check) cnt++;
            dfs1(child);
        }
    }
}

void dfs2(int node,int dep,int red){
    vis[node]=1;
    for(auto x : graph[node]){
        int child=x.first;
        int check = x.second;
        if(!vis[child]){
            if(check) dfs2(child,dep+1,red+1);
            else dfs2(child,dep+1,red);
        }
    }
    // cout<<node<<" "<<red<<" "<<dep<<endl;
    dp[node]=cnt-2*(red)+dep;
}

void solution(){

    // This is the main code
    int n,u,v;
    cin>>n;
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(mp(v,0));
        graph[v].pb(mp(u,1));
    }
    dfs1(1);
    // cout<<cnt<<endl;
    memset(vis,0,sizeof(vis));
    dfs2(1,0,0);
    int m=maxn;
    // forn(i,1,n+1) cout<<dp[i]<<endl;
    forn(i,1,n+1) m=min(m,dp[i]);
    cout<<m<<endl;
    forn(i,1,n+1){
        if(dp[i]==m) cout<<i<<" ";
    }
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