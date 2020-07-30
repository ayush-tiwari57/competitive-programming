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

struct Edge
{
    int u,v,w;
};
bool comp(Edge a, Edge b) {
  return a.w < b.w;
}
int parent[maxn];

int find(int x){
    if(x==parent[x]) return x;
    return parent[x]= find(parent[x]);
}
void merge(int x,int y){
    x=find(x);
    y=find(y);
    if(x!=y){
        parent[y]=x;    
    }
}

void solution(){

    // This is the main code
    int n,m,a[maxn],u,v,w;
    cin>>n;
    int ans;
    forn(i,1,n+1) parent[i]=i;
    forn(i,0,n) cin>>a[i];
    cin>>m;
    vector<Edge> edge;
    forn(i,0,m){
        cin>>u>>v>>w;
        Edge temp;
        temp.u=u;
        temp.v=v;
        temp.w=w;
        edge.pb(temp);
    }
    sort(all(edge),comp);
    for(Edge e:edge){
        if(find(e.v)==e.v){
            ans+=e.w;
            merge(e.u,e.v);
        }
    }
    // forn(i,1,n+1) cout<<parent[i]<<endl;
    int check=0;
    forn(i,1,n+1){
        if(parent[i]==i){
            if(check==1){
                cout<<"-1";
                return;
            }
            check++;
        }
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