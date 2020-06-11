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
#define maxn 1000004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<int> graph[200003];
int vis[200004]={0};
int f;

void dfs(int i){
    vis[i]=1;
    if(graph[i].size()!=2) f=0;
    for(auto x:graph[i]){
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
        f=1;
        if(!vis[i]){
            dfs(i);
            if(f) ans++;
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