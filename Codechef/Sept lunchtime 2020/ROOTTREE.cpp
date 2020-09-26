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

vector<int> graph[maxn],arr;
int n,vis[maxn];

void dfs(int node){
    vis[node]=1;
    for(auto x: graph[node]){
        if(!vis[x]) dfs(x);
    }
    arr.pb(node);
}
void dfs1(int node){
    vis[node]=1;
    for(auto x: graph[node]){
        if(!vis[x]) dfs1(x);
    }
}

void solution(){

    // This is the main code
    int u,v,ans=0;
    cin>>n;
    arr.clear();
    memset(vis,0,sizeof(vis));
    forn(i,0,n+1){
        graph[i].clear();
    }
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
    }
    forn(i,1,n+1){
        if(!vis[i]){
            dfs(i);
        }
    }
    reverse(arr.begin(), arr.end());
    memset(vis,0,sizeof(vis));
    forn(i,0,n){
        // cout<<arr[i]<<" ";
        if(!vis[arr[i]]){
            // cout<<arr[i]<<" "<<vis[1]<<endl;
            ans++;
            dfs1(arr[i]);
        }
    }
    // cout<<endl;
    cout<<ans-1<<endl;
}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("E:/CP/input.txt","r",stdin);
    // freopen("E:/CP/output.txt","w",stdout);
    // #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}