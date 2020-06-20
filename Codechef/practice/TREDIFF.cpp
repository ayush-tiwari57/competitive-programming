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

int father[maxn],a[maxn],vis[maxn]={0},d[maxn];
vector<int> graph[maxn],s;

void dfs(int node,int parent,int vis[],int depth){
    father[node]=parent;
    d[node]=depth;
    vis[node]=1;
    for(auto x: graph[node]){
        if(vis[x]==0){
            // cout<<x;
            dfs(x,node,vis,depth+1);
        }
    }

}

ll solve(int u,int v, int a[]){
    int cnt[102];
    memset(cnt,0,sizeof(cnt));
        while(u!=v){
            if(d[u]>d[v]){
                cnt[a[u]]++;
                if(cnt[a[u]]>1)  return 0;
                u=father[u];
            }
            else{
                cnt[a[v]]++;
                if(cnt[a[v]]>1) return 0;
                v=father[v];
            }
        }
        cnt[a[u]]++;
        if(cnt[a[u]]>1) return 0;
        ll prev=-2000, ans=1003;
        for(ll i=1;i<=100;i++){
            if(cnt[i]){
                ans=min(ans,i-prev);
                prev=i;
            }
        }
        return ans;
}

void solution(){

    // This is the main code
    int n,q,u,v;
    memset(d,0,sizeof(d));
    forn(i,0,maxn+1) graph[i].clear();
    cin>>n>>q;
    forn(i,1,n+1){
        a[i]=0;
        vis[i]=0;
        father[i]=0;
    }
    forn(i,1,n+1) cin>>a[i];
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    dfs(1,0,vis,0);
    forn(j,0,q){
        cin>>u>>v;
        ll ans=solve(u,v,a);
        cout<<ans<<endl;
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}