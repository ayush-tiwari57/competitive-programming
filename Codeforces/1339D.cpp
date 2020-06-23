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

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<int> graph[maxn],leaf,depth(maxn);
set<int> s;

void dfs(int node,int parent,int dep){
    depth[node]=dep;
    for(auto x:graph[node]){
        if(x==parent) continue;
        dfs(x,node,dep+1);
    }
}

void nodal(int node,int parent){
    for(auto x:graph[node]){
        if(x==parent) continue;
        if(graph[x].size()==1) s.insert(node);
        else nodal(x,node);
    }
}

void solution(){

    // This is the main code
    int n,u,v,root;
    cin>>n;
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    forn(i,1,n+1){
        if(graph[i].size()==1) leaf.pb(i);
        else root=i;
    }
    dfs(leaf[0],-1,0);
    int min=1;
    for(auto x:leaf){
        // cout<<depth[x]<<" ";
        if(depth[x]%2) min=3;
    }
    nodal(root,0);
    cout<<min<<" "<<n-1-leaf.size()+s.size();
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