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
    
struct Edge{
    int u,v,w;
};
bool comp(Edge a, Edge b){
    return a.w<b.w;
}
vector<Edge> edge;
int n,m,k,w;
int parent[maxn],vis[maxn];
vector<int> graph[maxn];
    
int find(int x){
    if(parent[x]==x) return x;
    return parent[x]=find(parent[x]);
}
void merge(int x,int y){
    x=find(x);
    y=find(y);
    if(y!=x)
        parent[y]=x;
}
    
void dfs(int node){
    vis[node]=1;
    for(auto child: graph[node]){
        if(!vis[child]){
            cout<<child<<" "<<node<<endl;
            dfs(child);
        }
    }
}
    
void solution(){
    
    // This is the main code
    cin>>n>>m>>k>>w;
    forn(i,1,k+1) parent[i]=i;
    string s[k][n];
    forn(i,0,k){
        forn(j,0,n) cin>>s[i][j];
    }
    forn(i,0,k){
        Edge t;
        t.u=i+1;
        t.v=0;
        t.w=n*m;
        edge.pb(t);
        forn(j,i+1,k){
            int cnt=0;
            forn(x,0,n){
                forn(y,0,m){
                    if(s[i][x][y]!=s[j][x][y]) cnt++;
                }
            }
            Edge temp;
            temp.u=i+1;
            temp.v=j+1;
            temp.w=cnt*w;
            edge.pb(temp);
        }
    }
    sort(all(edge),comp);
    int ans=0;
    for(Edge e:edge){
        if(find(e.u)!=find(e.v)){
            // cout<<e.u<<" "<<e.v<<" "<<e.w<<endl;    
            ans+=e.w;
            if(find(e.u)!=e.u){
                graph[e.u].pb(e.v);
                graph[e.v].pb(e.u);
                merge(e.u,e.v);
            }
            else{
                graph[e.v].pb(e.u);
                graph[e.u].pb(e.v);
                merge(e.v,e.u);
            }
        }
    }
    cout<<ans<<endl;
    forn(i,0,k+1){
        if(!vis[i]) dfs(i);
    }
//    forn(i,1,k+1) cout<<i<<" "<<parent[i]<<endl;
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