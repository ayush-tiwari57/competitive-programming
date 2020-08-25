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

vector< vector<int> > graph;
vector<ll> edge;
vector<ll> vis,val;
int n,m,u,v;

void dfs(int node) {
  vis[node] = 1;
  ll sum = 0;
  val[node] = 1;
  for (auto child : graph[node])
    if (!vis[child]) {
      dfs(child);
      sum += val[child];
    }
  val[node] += sum;
  edge.pb(val[node] * (n - val[node]));
}
 

void solution(){

    // This is the main code
    cin>>n;
    graph.assign(n + 1, vector<int>());
    vis.assign(n + 1, 0);
    val.assign(n + 1, 0);
    edge.clear();
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    dfs(1);
    cin>>m;
    vector<ll> num(m);
    forn(i,0,m) cin>>num[i];
    sort(all(edge),greater<ll>());
    sort(all(num),greater<ll>());
    int i=0;
    ll ans=0;
    if(m>n-1){
        for(i=0;i<m-n+1;i++) num[i+1]=(num[i+1]*num[i])%Mod;
    }
    forn(j,0,edge.size()){
        if(i<m) ans+=(edge[j]*num[i++])%Mod;
        else ans+=(edge[j])%Mod;
        ans%=Mod;
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
    // for(auto it:edge) cout<<it<<" ";
    // cout<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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