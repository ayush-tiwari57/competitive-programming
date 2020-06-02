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
vector<int> graph[maxn];
int dis[maxn];
int cyc[maxn];
int visited[maxn];

void cycle(int node,int parent){
    visited[node]++;
    if(visited[node]==3) cyc[node]=1;
    for(auto x: graph[node]){
        if(x!=parent && visited[x]<3) cycle(x,node);
    }
    visited[node]--;
}
void df2(int i,int dep,int pr)
{dis[i]=dep;
for(int j=0;j<graph[i].size();j++)
{if(!cyc[graph[i][j]]&&graph[i][j]!=pr)
  {
  	df2(graph[i][j],dep+1,i);
  }
}
}

void solution(){

    // This is the main code

    int n,u,v;
    cin>>n;
    forn(i,0,n){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    cycle(1,-1);
    for(int i=1;i<=n;i++)
    {if(cyc[i])
    df2(i,0,-1);}
    for(int i=1;i<=n;i++)
        cout<<dis[i]<<" ";
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