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
int ans=-1,z=0;

void dfs(vector<int> graph[],int node,int parent, int depth){
    if(depth>ans) ans=depth,z=node;
    for(auto x:graph[node]){
        if(x==parent) continue;
        dfs(graph,x,node,depth+1);
    }
}

void solution(){

    // This is the main code
    int n,m,x,y;
    cin>>n>>m;
    vector<int> graph[n+1];
    forn(i,0,m){
        cin>>x>>y;
        graph[x].pb(y);
        graph[y].pb(x);
    }
    dfs(graph,1,1,0);
    dfs(graph,z,z,0);
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