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

int vis[maxn],depth[maxn],depth_root[maxn];
vector<int> graph[maxn],leaf;

void dfs(int node,int dep,int flag){
    vis[node]=1;
    // cout<<node<<endl;
    if(graph[node].size()==1){
        if(flag==0){
            leaf.pb(node);
            depth[node]=dep;
        }
        else{
            depth_root[node]=dep;
        }
    }
    for(auto child: graph[node]){
        if(!vis[child]){
            dfs(child,dep+1,flag);
        }
    }
}

void solution(){

    // This is the main code
    int n,x,u,v;
    cin>>n>>x;
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    dfs(x,0,0);
    memset(vis,0,sizeof(vis));
    dfs(1,0,1);
    // for(auto i: leaf) cout<<i;
    int ans=0;
    forn(i,1,n+1){
        if(depth[i]<depth_root[i]){
            ans=max(ans,depth_root[i]);
        }
    }
    cout<<2*ans;
    
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