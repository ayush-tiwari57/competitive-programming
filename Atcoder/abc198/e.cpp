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
map<int,int> m;
int a[maxn];
int vis[maxn];

void dfs(int node,int flag){
    vis[node]=flag;
    m[a[node-1]]+=1;
    for(auto child: graph[node]){
        if(vis[child]) continue;
        if(!m[a[child-1]])
            dfs(child,1);
        else dfs(child,2);
    }    
    m[a[node-1]]-=1;
}

void solution(){

    // This is the main code
    int n;
    cin>>n;
    forn(i,0,n) cin>>a[i];
    forn(i,0,n-1){
        int u,v;
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    dfs(1,1);
    forn(i,1,n+1){
        if(vis[i]==1) cout<<i<<endl;;
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
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