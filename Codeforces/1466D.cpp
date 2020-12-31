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


void solution(){

    // This is the main code
    int n,u,v;
    cin>>n;
    int w[n+1];
    ll ans=0;
    forn(i,1,n+1){
        cin>>w[i];
        ans+=w[i];
    }
    vector<int> graph[n+1],num;
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    forn(i,1,n+1){
        forn(j,1,graph[i].size()){
            num.pb(w[i]);
        }
    }
    // num.pb(0);
    // for(auto x: num) cout<<x<<" ";
    // cout<<endl;
    sort(all(num),greater<int>());
    cout<<ans<<" ";
    for(auto x: num){
        ans+=x;
        cout<<ans<<" ";
    }
    cout<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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