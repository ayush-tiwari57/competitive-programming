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

vector<int> graph[200004];
vector<int> ans;
int order[200004],input[200004],x;
int vis[200004]={0};

bool cmp(int a,int b){
    return order[a]<order[b];
}

void bfs(int t){
    queue<int> q;
    q.push(t);
    while(!(q.empty())){
        x=q.front();
        // cout<<x<<" ";
        q.pop();
        ans.pb(x);
        vis[x]=1;
        for(auto z: graph[x]){ 
            if(!vis[z]) {
                q.push(z);
                // cout<<"\n"<<z;
            }
        }
    }
}

void solution(){

    // This is the main code
    int n,u,v;
    cin>>n;
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    // forn(i,1,n+1){
    //     for(auto z: graph[i]) cout<<z;
    // }
    forn(i,0,n){
        cin>>input[i];
        order[input[i]]=i;
    }
    for(int i=1;i<=n;i++)   sort(graph[i].begin(),graph[i].end(),cmp);
    bfs(1);
    forn(i,0,n){
        if (input[i]!=ans[i]){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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