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

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<pair<int,int>> graph[maxn];

int dijkstra(int a,int b){
    vector<int> dis(maxn,maxn);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push(mp(0,a));
    dis[a]=0;
    while(!q.empty()){
        int node=q.top().second;
        q.pop();
        for(auto x:graph[node]){
            int w=x.first;
            int v=x.second;
            if(dis[v]>dis[node]+w){
                dis[v]=dis[node]+w;
                q.push(mp(dis[v],v));
            }
        }
    }
    return dis[b];
}

void solution(){

    // This is the main code
    int n,k,u,v,c;
    cin>>n>>k;
    forn(i,0,k){
        cin>>u>>v>>c;
        graph[u].pb(mp(c,v));
    }
    int a,b;
    cin>>a>>b;
    int ans=dijkstra(a,b);
    if(ans==maxn) cout<<"NO"<<endl;
    else cout<<ans<<endl;
    forn(i,1,n+1) graph[i].clear();
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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