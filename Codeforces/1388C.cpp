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
ll vis[maxn]; 
ll p[maxn],h[maxn],cnt;
int n,m,u,v,flag;
ll num[maxn][4];
void dfs(int node){
    vis[node]=1;
    for(auto child: graph[node]){
        if(!vis[child]){
            dfs(child);
            // cout<<node<<" "<<child<<endl;
            p[node]+=p[child];
        }
    }
}

void dfs2(int node, ll hy){
    if (hy<h[node]){
        flag=1;
        return;
    }
    vis[node]=1;
    for(auto child: graph[node]){
        if(!vis[child]){
            dfs2(child,hy-p[node]);
        }
    }
    
}

void solution(){

    // This is the main code
    cin>>n>>m;
    memset(vis,0,sizeof(vis));
    memset(num,0,sizeof(num));
    forn(i,1,n+1) graph[i].clear();
    forn(i,1,n+1) cin>>p[i];
    forn(i,1,n+1) cin>>h[i];
    forn(i,0,n-1){
        cin>>u>>v;
        graph[v].pb(u);
        graph[u].pb(v);
    }
    dfs(1);
    flag=0;
    memset(vis,0,sizeof(vis));
    dfs2(1,p[1]);
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
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