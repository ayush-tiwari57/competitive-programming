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

vector<int> graph[200003];
vector<int> tgraph[200003],temp;
vector< vector<int> > ans;
stack<int> s;
int vis[200004]={};

void dfs1(int i){
    vis[i]=1;
    for(auto x:graph[i]){
        if(!vis[x]) dfs1(x);
    }
    s.push(i);
}
void dfs2(int i){
    vis[i]=1;
    temp.pb(i);
    for(auto x: tgraph[i]){
        if(!vis[x]) dfs2(x);
    }
}

void solution(){

    // This is the main code
    int n,m,u,v;
    cin>>n;
    int val[n+1];
    forn(i,1,n+1) cin>>val[i];
    cin>>m;
    forn(i,0,m){
        cin>>u>>v;
        graph[u].pb(v);
        tgraph[v].pb(u);
    }
    forn(i,1,n+1){
        if(!vis[i]) dfs1(i);
    }
    forn(i,1,n+1) vis[i]=0;
    while(!s.empty()){
        if(!vis[s.top()]){
            dfs2(s.top());
            ans.pb(temp);
            temp.clear();
        }
        s.pop();
    }
    ll ans1=0,ans2=1;
    for(auto x: ans){
        int m=INT_MAX;
        for(auto y:x) m=min(m,val[y]);
        ans1+=m;
        ll cnt=0;
        for(auto y: x) if(val[y]==m) cnt++;
        ans2=(ans2*cnt)%1000000007 ;
    }
    cout<<ans1<<" "<<ans2;
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