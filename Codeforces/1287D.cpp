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

int c[maxn]={0},flag=0,num[maxn]={0},cnt[maxn]={0},ans[maxn]={0};
vector<int> graph[maxn];

void dfs(int node,int parent){
    cnt[node]=1;
    int x=0,i=1;
    while(x!=c[node]+1){
        if(num[i]==0) x+=1;
        i+=1;
    }
    i--;
    ans[node]=i;
    num[i]=1;
    for(auto x:graph[node])  dfs(x,node);
    cnt[parent]+=cnt[node];
    if(cnt[node]-1<c[node]) flag=1;
}

void solution(){

    // This is the main code
    int n,u,root;
    cin>>n;
    forn(i,1,n+1){
        cin>>u>>c[i];
        graph[u].pb(i);
        if(u==0) root=i;
    }
    // cout<<root;
    dfs(root,0);
    if(flag) cout<<"NO";
    else{
        cout<<"YES"<<endl;
        forn(i,1,n+1) cout<<ans[i]<<" ";
    }
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