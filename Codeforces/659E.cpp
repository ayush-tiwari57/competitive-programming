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

vector<int> graph[maxn];
int vis[maxn],a,b;

void dfs(int node){
    a++;
    b+=graph[node].size();
    vis[node]=1;
    for(auto x: graph[node]){
        if(!vis[x]) dfs(x);
    }
}

void solution(){

    // This is the main code
    int n,m,u,v;
    cin>>n>>m;
    forn(i,0,m){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    int ans=0;
    forn(i,1,n+1){
        a=0,b=0;
        if(vis[i]==0) dfs(i);
        if(b/2==a-1) ans++;
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
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}