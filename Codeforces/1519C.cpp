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
    int n;
    cin>>n;
    vector<ll> u(n),s(n);
    forn(i,0,n) cin>>u[i];
    forn(i,0,n) cin>>s[i];
    vector<ll> v[n+1];
    forn(i,0,n) v[u[i]].pb(s[i]);
    vector<ll> skill(n+1,0);
    forn(i,1,n+1){
        sort(all(v[i]),greater<ll> ());
        int len=v[i].size();
        forn(j,1,len) v[i][j]+=v[i][j-1];
        forn(j,1,len+1){
            int k=1;
            ll x=0;
            while((k*j)-1<len){
                x=v[i][k*j-1];
                k++;
            }
            // cout<<j<<" "<<x<<endl;
            skill[j]+=x;
        }
    }
    forn(i,1,n+1) cout<<skill[i]<<" ";
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