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
ll ans[maxn],vis[maxn];

ll x=1816798556036292277,y=1269027849171992910;

void dfs(int node,int dep){
    ans[node]=dep;
    vis[node]=1;
    for(auto z: graph[node]){
        if(!vis[z]) dfs(z,dep+1);
    }
}

void solution(){

    // This is the main code
    int n,u,v;
    memset(ans,0,sizeof(ans));
    memset(vis,0,sizeof(vis));
    cin>>n;
    forn(i,0,n+1) graph[i].clear();
    forn(i,0,n-1){
        cin>>u>>v;
        graph[v].pb(u);
        graph[u].pb(v);
    }
    dfs(1,0);
    forn(i,1,n+1){
        if(ans[i]%2) cout<<x<<" ";
        else cout<<y<<" ";
    }
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