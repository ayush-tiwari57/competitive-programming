/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

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
#define maxn 2004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<int> graph[maxn];
int vis[maxn];
int disarr[2001][2001];
int maxdis=0;

void dis(int node,int cnt,int a){
    disarr[node][a]=cnt;
    disarr[a][node]=cnt;
    vis[node]=1;
    for(auto x:graph[node]){
        if(!vis[x]) dis(x,cnt+1,a);
    }
}

void solution(){

    // This is the main code
    int n,k,a;
    cin>>n>>k>>a;
    int special[k];
    forn(i,0,k) cin>>special[i];
    forn(i,0,n+1) graph[i].clear();
    forn(i,0,n-1){
        int x,y;
        cin>>x>>y;
        graph[x].pb(y);
        graph[y].pb(x);
    }
    forn(i,1,n+1){
        memset(vis,0,sizeof(vis));
        dis(i,0,i);
    }
    vector<int> c,b;
    forn(i,1,n+1){
        maxdis=INT_MIN;
        int node=special[0];
        forn(j,0,k){
            int p=disarr[a][special[j]]-disarr[i][special[j]];
            if(maxdis<p){
                maxdis=p;
                node=special[j];
            }
        }
        c.pb(maxdis);
        b.pb(node);
    }
    forn(i,0,n) cout<< c[i]<<" ";
    cout<<endl;
    forn(i,0,n) cout<< b[i]<<" ";
    cout<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}