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
ll ans,sum[maxn]={0},s[maxn]={0},parent[maxn];

void dfs(int node, int dad){
    // cout<<node<<" "<<dad<<" "<<sum[node]<<" "<<sum[dad]<<endl;
    if(s[node]==-1){
        ll m=2e9;
        for(auto x: graph[node]) m=min(m,s[x]);
        if(m==2e9) sum[node]=0;
        else sum[node]=m-s[dad];
        for(auto x: graph[node]) sum[x]= s[x]-sum[node]-s[dad];

    }
    for(auto x: graph[node]) dfs(x,node);
}

void solution(){

    // This is the main code
    ll n;
    cin>>n;
    parent[1]=0;
    graph[0].pb(1);
    forn(i,2,n+1){
        cin>>parent[i];
        graph[parent[i]].pb(i);
    }
    forn(i,1,n+1){
        cin>>s[i];
    }
    sum[1]=s[1];
    dfs(1,0);
    forn(i,1,n+1){
        // cout<<sum[i]<<" ";
        if(sum[i]<0){
            cout<<"-1";
            return;
        }
        ans+=sum[i];
    }
    cout<<ans;
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