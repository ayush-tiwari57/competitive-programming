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
int vis[maxn],special[maxn],dis[maxn];

void bfs(queue<int> q){
    while(!q.empty()){
        int z=q.front();
        q.pop();
        for(auto x: graph[z]){
            if(!vis[x]){
                q.push(x);
                dis[x]=dis[z]+1;
                vis[x]=1;
            }
        }
    }
}

void solution(){

    // This is the main code
    int n,m,k,u,v;
    cin>>n>>m>>k;
    forn(i,0,n+1) graph[i].clear();
    memset(vis,0,sizeof(vis));
    memset(special,0,sizeof(special));
    memset(dis,-1,sizeof(dis));
    forn(i,0,m){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    queue<int> q;
    forn(i,0,k){
        cin>>special[i];
        q.push(special[i]);
        vis[special[i]]=1;
        dis[special[i]]=0;
    }
    bfs(q);
    int query;
    cin>>query;
    forn(i,0,query){
        cin>>u;
        cout<<dis[u]<<endl;
    }
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