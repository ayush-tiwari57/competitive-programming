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

bool check(double len,ll k,vector<double> a){
    int n=a.size();
    ll x=0; 
    forn(i,0,n){
        x+=floor(a[i]/len);
    };
    if(x>=k) return 1;
    return 0;
}

void solution(){

    // This is the main code
    ll n,k;
    cin>>n>>k;
    vector<double> a(n);
    forn(i,0,n) cin>>a[i];
    double beg=0,end=1e8;
    // cout<<end;
    double ans=0;
    forn(i,0,100){
        double mid=(beg+end)/2;
        // cout<<mid<<endl;
        if(check(mid,k,a)){
            beg=mid;
        }
        else end=mid;
    }
    cout<<setprecision(7)<<beg<<endl;
    
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