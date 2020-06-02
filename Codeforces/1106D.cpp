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


void solution(){

    // This is the main code
    int n,m,u,v,x;
    cin>>n>>m;
    int visited[n+1]={0};
    vector<int> graph[n+1];
    vector<int> ans;
    forn(i,1,m+1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    // forn(i,1,n+1){
    //     for(auto x: graph[i]) cout<<x<<"->";
    //     cout<<endl;
    // }
  priority_queue <int, vector<int>, greater<int> > q;  
    visited[1]=1;
    q.push(1);
    while (!q.empty()){
        x=q.top();
        // cout<<x;
        q.pop();
        ans.pb(x);
        for(auto z: graph[x]){
            if (visited[z]!=1)
            {
                q.push(z);
                visited[z]=1;
            }
        }
    }
    for(auto i: ans) cout<<i<<" "; 
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