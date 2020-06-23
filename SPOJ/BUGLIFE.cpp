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

int cnt=1,color[maxn];
vector<int> graph[maxn];

int bfs(int node){
    queue<int> q;
    color[node]=1;
    q.push(node);
    while(!q.empty()){
        int fr=q.front();
        q.pop();
        for(auto x:graph[fr]){
            if(color[x]!=-1){
                if(color[fr]==color[x])  return 0;
                else continue;
            }
            color[x]=!color[fr];
            q.push(x);
        }
    }

    return 1;
}

void solution(){

    // This is the main code
    cout<<"Scenario #"<<cnt<<":"<<endl;
    memset(color,-1,sizeof(color));
    int n,m,u,v,f;
    cin>>n>>m;
    forn(i,1,n+1){
        graph[i].clear();
    }
    forn(i,0,m){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    forn(i,1,n+1){
        if(color[i]==-1){
            f=bfs(i);
            if(!f) break;
        }
    }
    if(!f) cout<<"Suspicious bugs found!"<<endl;
    else cout<<"No suspicious bugs found!"<<endl;
    cnt++;

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