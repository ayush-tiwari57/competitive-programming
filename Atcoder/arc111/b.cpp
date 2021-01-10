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
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int parent[400001];

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

void solution(){

    // This is the main code
    int n;
    cin>>n;
    int u,v,ans=0;
    map<int,int> edges;
    map<int,set<int>> m;
    vector<pair<int,int>> a;
    forn(i,0,400001) parent[i]=i;   
    forn(i,0,n){
        cin>>u>>v;
        a.pb({u,v});
        union_sets(u,v);
        
    }
    for(auto x: a){
        u=x.first;
        v=x.second;
        edges[find_set(u)]++;
        m[find_set(u)].insert(u);
        m[find_set(u)].insert(v);
    }
    for(auto x: m){
        auto s=x.second.size();
        if(edges[x.first]==s-1) ans+=s-1;
        else ans+=s;
    }
    cout<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}