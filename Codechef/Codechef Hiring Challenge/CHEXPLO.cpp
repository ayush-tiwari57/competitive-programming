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
int depth[maxn]={0};


void dfs(int node,int parent,int dep){
    depth[node]=dep;
    for(auto x: graph[node]){
        if(parent==x) continue;
        dfs(x,node,dep+1);
    }
}

void solution(){

    // This is the main code
    int n,u,v;
    cin>>n;
    forn(i,0,n+1) graph[i].clear();
    memset(depth,0,sizeof(depth));
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    dfs(1,0,1);
    int m=-1,ind;
    forn(i,1,n+1){
        if(depth[i]>m){
            m=depth[i];
            ind=i;
        }
    }
    memset(depth,0,sizeof(depth));
    dfs(ind,0,1);
    m=-1;
    forn(i,1,n+1){
        if(depth[i]>m){
            m=depth[i];
        }
    }
    cout<<m/2<<"\n";
    
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