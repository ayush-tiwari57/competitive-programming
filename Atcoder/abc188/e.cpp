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

int a[maxn],vis[maxn],cost[maxn];
vector<int> graph[maxn];

void dfs(int node,int parent,int mi,int ma){
    vis[node]=1;
    cost[node]=max(a[node]-mi,ma);
    // cout<<node<<" "<<cost[node]<<endl;
    ma=max(ma,cost[node]);
    mi=min(mi,a[node]);
    for(auto child:graph[node]){
        if(vis[child]){
            cost[node]=max(cost[node],cost[child]);
            continue;
        }
        dfs(child,node,mi,ma);
    }
    cost[node]=max(cost[node],ma);
}

void solution(){

    // This is the main code
    int n,m;
    cin>>n>>m;
    forn(i,1,n+1) cin>>a[i];
    forn(i,0,m){
        int u,v;
        cin>>u>>v;
        graph[u].pb(v);
    }
    memset(cost,INT_MIN,sizeof(cost));
    for(int i=1;i<n+1;i++){
        if(!vis[i]) dfs(i,0,INT_MAX,INT_MIN);
    }
    int ans=INT_MIN;
    forn(i,1,n+1) ans=max(ans,cost[i]);
    cout<<ans;
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