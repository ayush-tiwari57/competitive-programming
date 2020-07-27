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

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<int> graph[maxn];
ll vis[maxn],x,ans;
ll Mod= 1e9+7;

void dfs(int node){
    x++;
    vis[node]=1;
    for(auto z: graph[node]){
        if(!vis[z]) dfs(z);
    }
}

void solution(){

    // This is the main code
    int n,k,u,v,t;
    cin>>n>>k;
    forn(i,0,n-1){
        cin>>u>>v>>t;
        if(t==0){
            graph[u].pb(v);
            graph[v].pb(u);
        }
    }
    forn(i,1,n+1){
        x=0;
        if(!vis[i]){
            dfs(i);
            // cout<<x<<endl;
            ll y=1;
            forn(i,0,k){
                y=(y*x)%Mod;
            }
            ans=(ans+y)%Mod;
            ans=ans%Mod;
        }   
    }
    x=1;
    forn(i,0,k){
        x=(x*n)%Mod;
    }
    cout<<(x-ans+Mod)%Mod;

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