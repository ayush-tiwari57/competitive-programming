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

int n,m,k,vis[maxn],color[maxn],ma,s;
map<int,int> cnt;
vector<int> graph[maxn];

void dfs(int node,int parent){
    if(vis[node]) return;
    vis[node]=1;
    cnt[color[node]]++;
    s++;
    ma=max(ma,cnt[color[node]]);
    for(auto x: graph[node]){
        // if(parent==x) continue;
        dfs(x,node);
    }
}

void solution(){

    // This is the main code
    int u,v;
    cin>>n>>m>>k;
    forn(i,1,n+1) cin>>color[i];
    forn(i,0,m){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    ll ans=0;
    forn(i,1,n+1){
        if(!vis[i]){
            cnt.clear();
            ma=0;
            s=0;
            dfs(i,0);
            ans+=s-ma;
        }
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