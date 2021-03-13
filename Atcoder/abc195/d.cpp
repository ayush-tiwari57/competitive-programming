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


void solution(){

    // This is the main code
    int n,m,q;
    cin>>n>>m>>q;
    vector<pair<int,int>> a,acopy;
    int w,v;
    forn(i,0,n){
        cin>>w>>v;
        a.pb({-v,w});
    }
    int x[m];
    forn(i,0,m) cin>>x[i];
    int l,r;
    // areal=a;
    sort(all(a));
    forn(i,0,q){
        cin>>l>>r;
        l--;
        r--;
        vector<int> b;
        forn(j,0,l)
            b.pb(x[j]);
        forn(j,r+1,m) b.pb(x[j]);
        sort(all(b));
        acopy=a;
        int j=0,k=0;
        ll ans=0;
        for(auto p: b){
            // cout<<p<<endl;
            forn(g,0,acopy.size()){
                if(acopy[g].second<=p){
                    ans+=abs(acopy[g].first);
                    // cout<<acopy[g].second<<" "<<acopy[g].first<<endl;
                    acopy[g].second=INT_MAX;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
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