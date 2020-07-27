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

void make_set(int x){
    parent[x]=x;
}

int union_find(int x){
    if(parent[x]==x) return x;
    return parent[x]=union_find(parent[x]);
}
void union_set(int x,int y){
    x=parent[x];
    y=parent[y];
    if(x!=y){
        parent[y]=x;
    }
}

void solution(){

    // This is the main code
    int n,u,v;
    vector<int> close,make;
    cin>>n;
    forn(i,1,n+1) make_set(i);
    forn(i,0,n-1){
        cin>>u>>v;
        if(union_find(u)==union_find(v))
        {
            close.pb(u);
            close.pb(v);
        }
        else{
            // if(u>v) swap(u,v);
            union_set(u,v);
        }
    }
    forn(i,1,n+1){
        if(union_find(i)!=union_find(1)){
            union_set(1,i);
            make.pb(1);
            make.pb(i);
        }
    }
    cout<<(int)make.size()/2<<endl;
    // forn(i,0,make.size()) cout<<make[i]<<endl;
    // forn(i,0,close.size()) cout<<close[i]<<endl;
    for(int i=0;i<(int)make.size()-1;i+=2){
        cout<<close[i]<<" "<<close[i+1]<<" "<<make[i]<<" "<<make[i+1]<<endl;
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