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
    vector<ll> a(n);
    forn(i,0,n) cin>>a[i];
    ll x=1,mi=LLONG_MAX,ind;
    forn(i,0,n){
        if(a[i]<mi){
            mi=a[i];
            ind =i;
        }
    }
    // if(mi==1) x=2;
    x=mi+1;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    cout<<n-1<<endl;
    forn(i,ind+1,n){
        cout<<i+1<<" "<<ind+1<<" "<<x<<" "<<mi<<endl;
        x++;
    }
    x=mi+1;
    rforn(i,ind-1,0){
        cout<<i+1<<" "<<ind+1<<" "<<x<<" "<<mi<<endl;
        x++;
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}