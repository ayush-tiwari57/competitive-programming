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

vector<int> a(maxn,0),vis(maxn,0),cost(maxn,INT_MAX);
vector<int> graph[maxn];

void dfs(int node,int parent,int mi){
    vis[node]=1;
    // cout<<node<<" "<<parent<<" "<<cost[node]<<endl;
    if(mi!=INT_MAX) cost[node]= max(cost[node],a[node]-mi);
    mi=min(mi,a[node]);
    for(auto child: graph[node]){
        // if(vis[child]){
        //     // cout<<"yo";
        //     cost[node]=max(cost[node],cost[child]);
        //     continue;
        // }
        dfs(child,node,mi);
    }
    // cout<<node<<" "<<parent<<" "<<cost[node]<<endl;
    if(cost[node]!=INT_MAX) cost[parent]=max(cost[node],cost[parent]);
}

void solution(){

    // This is the main code
    int n,m;
    cin>>n>>m;
    forn(i,1,n+1) cin>>a[i];
    int u,v;
    forn(i,0,m){
        cin>>u>>v;
        graph[u].pb(v);
    }
    // memset(cost,INT_MIN,sizeof(cost));
    
    int ans=INT_MIN;
    // forn(i,1,n+1) if(cost[i]<INT_MAX) ans=max(ans,cost[i]);
    forn(i,1,n+1){
        for(auto x: graph[i]){
            u=i;
            v=x;
            cost[v]=min(cost[v],min(cost[u],a[u]));
        }   
        if(cost[i]!=INT_MAX) ans=max(ans,a[i]-cost[i]);
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
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}