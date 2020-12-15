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

vector<int> graph[maxn],depth(maxn,0),vis(maxn,0);

double ans=0;
void dfs(int node,int dep,double p){
    vis[node]=1;
    depth[node]=dep;
    for(auto child: graph[node]){
        if(!vis[child]){
            if(node==1)
            dfs(child,dep+1,p*(1/(double)graph[node].size()));
            else dfs(child,dep+1,p*(1/(double)(graph[node].size()-1)));
            // cout<<node<<" "<<p<<endl;
        }
    }
    if(graph[node].size()==1){
        // cout<<node<<" "<<p<<" "<<depth[node]<<endl;
        ans+=(double)(depth[node]*p);
    }
}

void solution(){

    // This is the main code
    int n,u,v;
    cin>>n;
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    dfs(1,0,1.0);
    cout<<fixed<<setprecision(6)<<ans;
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