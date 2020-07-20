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
int depth[maxn];
int dad[maxn];
void dfs(int node,int parent,int dep){
    depth[node]=dep;
    dad[node]=parent;
    for(auto x: graph[node]){
        if(parent==x) continue;
        dfs(x,node,dep+1);
    }
}
void dfs1(int node,int parent,int dep){
    if(!depth[node]) depth[node]=dep;
    for(auto x: graph[node]){
        if(parent==x) continue;
        dfs(x,node,dep+1);
    }
}

void solution(){

    // This is the main code
    int n,u,v;
    memset(depth,0,sizeof(depth));
    cin>>n;
    forn(i,0,n+1) graph[i].clear();
    forn(i,0,n){
        cin>>u>>v;
        graph[v].pb(u);
        graph[u].pb(v);
    }
    dfs(1,0,0);
    int m=-1,ind;
    forn(i,1,n+1){
        if(depth[i]>m){
            m=depth[i];
            ind=i;
        }
    }
    memset(depth,0,sizeof(depth));
    dfs(ind,0,0);
    m=-1;
    int ind2;
    forn(i,1,n+1){
        if(depth[i]>m){
            m=depth[i];
            ind2=i;
        }
    }
    memset(depth,0,sizeof(depth));
    int i=ind2,dep=1;
    while (dad[i]!=ind){
        depth[i]=dep;
        dep++;
        i=dad[i];
    }
    depth[ind]=dep;
    dfs1(1,0,1);
    forn(i,1,n+1) cout<<depth[i]<<" ";
    cout<<endl;
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