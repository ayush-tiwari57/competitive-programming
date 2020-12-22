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
    int n,m;
    cin>>n>>m;
    int a[m];
    forn(i,0,m) cin>>a[i];
    int g=a[0];
    forn(i,0,m) g=__gcd(g,a[i]);
    // cout<<g<<endl;
    int ans=-2e9;
    if(g>n){
        forn(i,1,sqrt(g)+1){
            if(g%i==0){
                int x=i;
                int y=g/i;
                if(x<=n) ans=max(ans,x);
                if(y<=n) ans=max(ans,y);
            }   
        }
        cout<<n-ans<<endl;
        return;
    }
    cout<<n-g<<endl;;
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