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

stack<ll> s1,mi1,ma1,s2,mi2,ma2;
ll n,k;

void add(ll x){
    s2.push(x);
    mi2.push(min(x,mi2.top()));
    ma2.push(max(x,ma2.top()));
}

void remove(){
    if(s1.empty()){
        while(!s2.empty()){
            s1.push(s2.top());
            mi1.push(min(s2.top(),mi1.top()));
            mi2.pop();
            ma1.push(max(s2.top(),ma1.top()));
            s2.pop();
            ma2.pop();
        }
    }
    s1.pop();
    mi1.pop();
    ma1.pop();
}

bool good(){
    ll mx=max(ma1.top(),ma2.top());
    ll mi=min(mi1.top(),mi2.top());
    return mx-mi<=k;
}


void solution(){

    // This is the main code
    cin>>n>>k;
    mi1.push(LLONG_MAX);
    mi2.push(LLONG_MAX);
    ma1.push(LLONG_MIN);
    ma2.push(LLONG_MIN);
    ll a[n];
    forn(i,0,n) cin>>a[i];
    ll ans=0,l=0;
    forn(i,0,n){
        add(a[i]);
        while(!good()){
            remove();
            l++;
        }
        // cout<<i<<" "<<l<<" "<<i-l+1<<endl;
        ans+=i-l+1;
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