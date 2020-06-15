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

int vis[maxn]={0},ar[maxn],p=0,ans=0,mx;
vector<int> graph[maxn];

void dfs(int node){
    vis[node]=1;
    p++;
    for(auto x: graph[node]){
        if(!vis[x]) dfs(x);
    }
}

void solution(){

    // This is the main code
    int n,m,k,u,v;
    cin>>n>>m>>k;
    forn(i,1,k+1) cin>>ar[i];
    forn(i,1,m+1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    forn(i,1,k+1){
        p=0;
        dfs(ar[i]);
        ans+=(p*(p-1))/2;
        mx=max(mx,p);
    }
    // cout<<ans<<" "<<mx<<endl;
    ans-=mx*(mx-1)/2;
    forn(i,1,n+1){
        if(!vis[i]) mx+=1;
    }
    cout<<ans-m + (mx*(mx-1)/2);

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