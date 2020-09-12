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

int n;
vector< vector<int> > graph;
int vis[maxn];
int cen[maxn],cnt[maxn],dad[maxn];
void dfs(int node, int parent) {
  dad[node] = parent;
  vis[node] = 1;
  int sum = 0;
  for (auto child : graph[node])
    if (!vis[child]) {
      dfs(child, node);
      sum += cnt[child];
      cen[node] = max(cen[node], cnt[child]);
    }
  cnt[node] = sum + 1;
  cen[node]=max(cen[node], n-cnt[node]);
}

void solution(){

    // This is the main code
    int u,v;
    cin>>n;
    graph.assign(n + 1, vector<int>());
    forn(i,0,n-1){
        cin>>u>>v;
        graph[v].pb(u);
        graph[u].pb(v);
    }
    memset(vis,0,sizeof(vis));
    memset(cnt,0,sizeof(cnt));
    memset(dad,0,sizeof(dad));
    memset(cen,0,sizeof(cen));
    dfs(1,0);
    int minele=INT_MAX;
    vector<int> ar;
    for(int i=1; i<=n; ++i) minele=min(minele, cen[i]);
    for(int i=1; i<=n; ++i) if(cen[i]==minele) ar.pb(i);
     if(ar.size()==1){
        cout<<"1 "<<graph[1][0]<<endl;
        cout<<"1 "<<graph[1][0]<<endl;
        return;
    }

  int x=ar[0], y=ar[1];

  for(auto it: graph[x]) if(it!=y){
    cout<<x<<" "<<it<<endl;
    x=it;
    break;
  }
  cout<<x<<" "<<y<<endl;

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