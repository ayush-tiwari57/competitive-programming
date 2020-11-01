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

vector<int> graph[maxn],subtree(maxn,1);

void dfs(int node,int parent){
    for(auto child: graph[node]){
        if(child==parent) continue;
        dfs(child,node);
        // cout<<node<<" "<<child<<" "<<subtree[node]<<endl;
        // mex[node]+=subtree[child];
    }
    subtree[parent]+=subtree[node];
}

ll count(int node,int parent){
    ll ans=0,m=0;
    for(auto child: graph[node]){
        if(child==parent) continue;
        m=max(m,count(child,node));
    }
    ans+=m+subtree[node];
    return ans;
}

void solution(){

    // This is the main code
    int n,x;
    forn(i,0,maxn) graph[i].clear();
    subtree.assign(maxn,1);
    cin>>n;
    forn(i,2,n+1){
        cin>>x;
        graph[x].pb(i);
    }
    dfs(1,0);
    ll ans =count(1,0);
    cout<<ans<<endl;
    // forn(i,1,n+1) cout<<mex[i]<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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