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
    ll n;
    cin>>n;
    vector<ll> a(n),b(n),c(n);
    map<ll,ll>mc,ma;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        ma[a[i]]++;
    }
    for(int i=0;i<n;i++)    cin>>b[i];
    for(int i=0;i<n;i++){
        cin>>c[i];
        mc[b[c[i]-1]]++;
    }
    ll ans=0;
    for(auto x:ma){
        ans+=x.second*mc[x.first];
    }
    cout<<ans;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}