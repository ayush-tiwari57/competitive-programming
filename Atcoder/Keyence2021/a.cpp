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
    ll a[n],b[n];
    forn(i,0,n) cin>>a[i];
    forn(i,0,n) cin>>b[i];
    ll m1=a[0],m2=b[0];
    cout<<m1*m2<<endl;
    ll ans=m1*m2;
    forn(i,1,n){
        // m1=max(m1,a[i-1]);
        ans=max(ans,max(a[i]*b[i],m1*b[i]));
        cout<<ans<<endl;
        m1=max(m1,a[i]);
    } 
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