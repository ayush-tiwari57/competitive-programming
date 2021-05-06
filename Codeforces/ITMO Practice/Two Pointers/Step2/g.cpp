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

stack<ll> s1,gcd1,s2,gcd2;

void add(ll x){
    s2.push(x);
    gcd2.push(__gcd(gcd2.top(),x));
}

void remove(){
    if(s1.empty()){
        while(!s2.empty()){
            s1.push(s2.top());
            gcd1.push(__gcd(gcd1.top(),s1.top()));
            s2.pop();
            gcd2.pop();
        }
    }
    s1.pop();
    gcd1.pop();
}

bool good(){
    ll gcd=__gcd(gcd1.top(),gcd2.top());
    if(gcd==1) return 1;
    return 0;
}

void solution(){

    // This is the main code
    int n;
    cin>>n;
    gcd1.push(0);
    gcd2.push(0);
    ll a[n];
    forn(i,0,n) cin>>a[i];
    ll ans=LLONG_MAX,l=0;
    forn(i,0,n){
        add(a[i]);
        while(good()){
            remove();
            ans=min(ans,i-l+1);
            l++;
        }
    }
    if(ans==LLONG_MAX) cout<<-1;
    else cout<<ans;
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