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
#define mod 1000000007
    
// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);
    
    
using namespace std;
    
vector<int> graph[maxn];
int out[maxn],in[maxn],ind;
vector<int> ans;
    
void dfs(int node,int parent){
    ans.pb(node);
    in[node]=++ind;
    
    for(auto x:graph[node]){
        dfs(x,node);
    }
    out[node]=ind;
}
    
void solution(){
    
    // This is the main code
    int n,q,u,v;
    cin>>n>>q;
    // int a[maxn];
    forn(i,2,n+1){
        cin>>u;
        graph[u].pb(i);
    } 
    // forn(i,1,n){
    //     for(auto x: graph[i]) cout<<x<<"->";
    // }
    
    dfs(1,1);
    // for(auto x:ans) cout<<x<<endl;
    while(q--){
        int u,k;
        cin>>u>>k;
        if(out[u]-in[u]+1>=k){
            cout<<ans[in[u]+k-2]<<endl;
        }
        else cout<<"-1"<<endl;
    }
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