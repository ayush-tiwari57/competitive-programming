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

vector<int> graph[maxn];
int vis[maxn],cnt[maxn],dis[maxn],len;

void dfs(int node,int parent,int dep){
    vis[node]=1;
    dis[node] = dep;
    // cout<<node<<endl;
    for(auto child: graph[node]){
        if(vis[child]==0){
            dfs(child,node,dep+1);
        }
        else if(child!=parent and vis[child]){
			len=dis[node]-dis[child]+1;
		}
    }
    // cout<<cnt[parent]<<endl;
    vis[node]=0;
    cnt[parent]=cnt[node]+1;
}

void solution(){

    // This is the main code
    int n,u,v;
    cin>>n;
    forn(i,0,n+1) graph[i].clear();
    forn(i,0,n){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    memset(cnt,0,sizeof(cnt));
    memset(vis,0,sizeof(vis));
    memset(dis,1,sizeof(dis));
    dfs(1,0,0);
    int sum=0;

    forn(i,1,n+1) cout<<cnt[i]<<" ";
    // cout<<len;
    cout<<sum+(len*(n-len))<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}