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
    int n,p,m,fx;
    cin>>n>>p;
    vector<int> ans,a(n);
    forn(i,0,n) cin>>a[i];
    sort(all(a));
    m=a[n-1];
    forn(x,max(m-n+1,1),m){
        int flag=1;
        forn(i,0,n){
            fx= ub(all(a),x+i)-a.begin()-i;
            if(fx%p==0){
                flag=0;
                break;
            }
        }
    if(flag) ans.pb(x);
    }
    cout<<ans.size()<<endl;
    for(auto x: ans) cout<<x<<" ";

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