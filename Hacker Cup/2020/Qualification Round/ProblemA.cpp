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
#define maxn 204
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<int> graphin[maxn],graphout[maxn],ord;
char ar[52][52],in[51],out[51];
int vis[maxn];

void dfsin(int node){
    vis[node]=1;
    ord.pb(node);
    for(auto x: graphin[node]){
        if(!vis[x]) dfsin(x);
    }

}
void dfsout(int node){
    vis[node]=1;
    ord.pb(node);
    for(auto x: graphout[node]){
        if(!vis[x]) dfsout(x);
    }

}

void solution(int c){

    // This is the main code
    int n;
    cin>>n;
    forn(i,1,n+1) graphin[i].clear();
    forn(i,1,n+1) graphout[i].clear();
    memset(vis,0,sizeof(vis));
    forn(i,1,n+1) cin>>in[i];
    forn(i,1,n+1) cin>>out[i];
    forn(i,1,n+1){
        forn(j,1,n+1){
            if(i==j) ar[i][j]='Y';
            else ar[i][j]='N';
        }
    }
    forn(i,1,n){
        if(out[i]=='Y' and in[i+1]=='Y') graphin[i].pb(i+1);
        if(out[i+1]=='Y' and in[i]=='Y') graphout[i+1].pb(i);
    }
    // forn(i,1,n+1){
    //     cout<<i<<"->";
    //     for(auto x: graph[i]) cout<<x<<"->";
    //     cout<<endl;
    // }
    forn(i,1,n+1){
        ord.clear();
    if(!vis[i]){ 
            dfsin(i);
            int l= (int) ord.size();
            forn(j,0,l){
                forn(k,j+1,l) ar[ord[j]][ord[k]]='Y';
            }
        }
    }
    memset(vis,0,sizeof(vis));
    rforn(i,n+1,1){
        ord.clear();
        if(!vis[i]){
            dfsout(i);
            int l= (int) ord.size();
            forn(j,0,l){
                forn(k,j+1,l) ar[ord[j]][ord[k]]='Y';
            }
        }
    }
    cout<<"Case #"<<c<<":"<<endl;
    forn(i,1,n+1){
        forn(j,1,n+1) cout<<ar[i][j];
        cout<<"\n";
    }
}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("E:/CP/input.txt","r",stdin);
    // freopen("E:/CP/output.txt","w",stdout);
    // #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    for(int c=1; c<=t;c++)
    {
        solution(c);
    }
    return 0;
}