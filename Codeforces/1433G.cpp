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

vector<vector<pair<int,int>>> graph;
vector<vector<int>> dis;
int n,m,k,x,y,w;

void dijkstra(int node,vector<int> &d){
    d= vector<int>(n,2e9);
    d[node]=0;
    set<pair<int,int>> s;
    s.insert({d[node],node});
    while(!s.empty()){
        int u=s.begin()->second;
        s.erase(s.begin()); 
        for(auto [child,wi]: graph[u]){
            if(d[child]>d[u]+wi){
                d[child]=d[u]+wi;
                s.insert({d[child],child});
            }
        }
    }

}

void solution(){

    // This is the main code
    cin>>n>>m>>k;
    graph=vector<vector<pair<int,int>>>(n);
    forn(i,0,m){
        cin>>x>>y>>w;
        x--;
        y--;
        graph[x].pb(mp(y,w));
        graph[y].pb(mp(x,w));
    }
    vector<pair<int,int>> route;
    forn(i,0,k){
        cin>>x>>y;
        x--;
        y--;
        route.pb(mp(x,y));
    }
    dis=vector<vector<int>>(n);
    forn(i,0,n){
        dijkstra(i,dis[i]);
    }
    int ans=2e9;
    forn(i,0,n){
        for(auto [child,wi]: graph[i]){
            int cur=0;
            for(auto [a,b]: route){
                cur+=min(dis[a][b],min(dis[a][i]+dis[child][b],dis[a][child]+dis[i][b]));
            }
            ans=min(ans,cur);
        }
    }
    cout<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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