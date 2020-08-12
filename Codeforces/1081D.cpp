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
bool comp(Edge x, Edge y){
    return x.w<y.w;
}

vector<int> graph[maxn];
vector<Edge> edge;
int parent[maxn],special[maxn],vis[maxn];

int find(int u){
    if(u==parent[u]) return u;
    return parent[u]=find(parent[u]);
}
void merge(int u,int v){
    u=find(u);
    v=find(v);
    if(u!=v) parent[v]=u;
}

void solution(){

    // This is the main code
    int n,m,k,u,v,w;
    cin>>n>>m>>k;
    forn(i,1,n+1) parent[i]=i;
    forn(i,0,k){
        cin>>u;
        special[u]=1;
    }
    forn(i,0,m){
        cin>>u>>v>>w;
        Edge t;
        t.u=u;
        t.v=v;
        t.w=w;
        edge.pb(t);
    }
    sort(all(edge),comp);
    int cnt=0,ans=0;
    for(Edge e: edge){
        if(find(e.u)!=find(e.v)){
            special[find(e.v)]+=special[find(e.u)];
            if(special[find(e.v)]==k){ans=e.w; break;}
            merge(e.v,e.u);
        }
    }
    forn(i,0,k) cout<<ans<<" ";

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