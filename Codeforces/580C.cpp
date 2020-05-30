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
int m,n,ans=0,x,y;
int a[maxn];

void dfs(vector<int> graph[],int start,int k,int parent){
    if(k>m) return;
    if(graph[start].size()==1 && graph[start][0]==parent){
        ans++;
        return;
    }
    for(auto i=graph[start].begin(); i!=graph[start].end();i++){
        if(*i==parent) continue;
        dfs(graph,*i,k*a[*i]+a[*i],start);
    }
}

void solution(){

    // This is the main code

    cin>>n>>m;

    vector <int> graph[n];
    forn(i,0,n) cin>>a[i];
    forn(i,0,n-1){
        cin>>x>>y;
        x--;
        y--;
        graph[x].pb(y);
        graph[y].pb(x);
    }    
    dfs(graph,0,a[0],-1);
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