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
int vis[maxn];
stack<int> s;


void topo(int node){
    vis[node]=1;
    for(auto x: graph[node]){
        if(vis[x]==0) topo(x);
    }
    s.push(node);
}

void solution(){

    // This is the main code
    memset(vis,0,sizeof(vis));
    map<int,int> ord;
    int n,m,t,u,v,flag=0;
    cin>>n>>m;
    forn(i,0,n+1) graph[i].clear();
    // forn(i,0,n+1) ograph[i].clear();
    vector<pair<int,int>> ograph;
    forn(i,0,m){
        cin>>t>>u>>v;
        u--;
        v--;
        ograph.pb({u,v});
        if(t==1) graph[u].pb(v);
    }
    forn(i,0,n){
        if(!vis[i]) topo(i);
    }
    int cnt=0;
    while(!s.empty()){
        ord[s.top()]=cnt;
        cnt++;
        s.pop();
    }
    forn(i,0,n){
        for(auto x: graph[i]){
            if(ord[i]>ord[x]) flag=1;
        }
    }
    if(flag==1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(auto x: ograph){
            if(ord[x.first]>ord[x.second]) cout<<x.second+1<<" "<<x.first+1<<endl;
            else cout<<x.first+1<<" "<<x.second+1<<endl;
        }
    }


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