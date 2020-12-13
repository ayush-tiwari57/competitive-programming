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
vector<int> side(maxn,-1);
vector<pair<int,int>> edges;

void solution(){

    // This is the main code
    int n,m,u,v;
    cin>>n>>m;
    forn(i,0,m){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
        edges.pb({u,v});
    }
    queue<int> q;
    bool is_bipartite=1;
    forn(i,0,n+1){
        if(side[i]==-1){
            q.push(i);
            side[i]=0;
            while(!q.empty()){
                v=q.front();
                q.pop();
                for(auto x:graph[v]){
                    if(side[x]==-1){
                        side[x]=1-side[v];
                        q.push(x);
                    }
                    else{
                        is_bipartite &= side[v]!=side[x];
                    }
                }
            }
        }
    }
    if(is_bipartite){
        cout<<"YES"<<endl;
        for(auto x: edges){
            if(side[x.first]==0) cout<<0;
            else cout<<1;
        }
    }
    else cout<<"NO"<<endl;

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