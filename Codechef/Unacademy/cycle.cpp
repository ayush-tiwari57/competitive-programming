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

int parent[maxn];

int find(int node){
    if(node==parent[node]) return node;
    return parent[node]=find(parent[node]);
}
void merge(int x,int y){
    x=find(x);
    y=find(y);
    parent[y]=x;
}

void solution(){

    // This is the main code
    int n,m,u,v,ans=0;
    cin>>n>>m;
    forn(i,1,n+1) parent[i]=i;
    
    forn(i,0,m){
        cin>>u>>v;
        if(find(u)!=find(v)){
            merge(u,v);
        }
        else ans++;
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
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}