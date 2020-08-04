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

int n,a[maxn],u,v,ans[maxn],dp[maxn];
vector<int> graph[maxn];

void dfs1(int node,int parent){
    dp[node]=a[node];
    for(auto child: graph[node]){
        if(child==parent) continue;
        dfs1(child,node);
        dp[node]+=max(dp[child],0);
    }
}

void dfs2(int node,int parent){
    ans[node]=dp[node];
    // cout<<node<<endl;
    for(auto child: graph[node]){
        if(child==parent) continue;
        dp[node]-=max(dp[child],0);
        dp[child]+=max(0,dp[node]);
        dfs2(child,node);
        dp[child]-=max(0,dp[node]);
        dp[node]+=max(0,dp[child]);
    }
}

void solution(){

    // This is the main code
    cin>>n;
    forn(i,1,n+1){
        cin>>a[i];
        if(a[i]==0) a[i]=-1;
    }
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    dfs1(1,0);
    dfs2(1,0);
    forn(i,1,n+1) cout<<ans[i]<<" ";
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