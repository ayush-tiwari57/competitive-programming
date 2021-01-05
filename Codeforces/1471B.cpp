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
    int n,x;
    cin>>n>>x;
    int a[n];
    ll ans=0;
    forn(i,0,n){
        cin>>a[i];
        ans+=a[i];
    }
    ll cnt=0;
    ll mi=INT_MAX,flag=0;
    vector<ll> v;
    forn(i,0,n){
        cnt=0;
        int z=a[i];
        while(z%x==0){
            z/=x;
            cnt++;
        }
        mi=min(mi,cnt);
        v.pb(cnt);
    }
    forn(i,0,n){
        if(v[i]==mi) flag=1;
        if(flag){
            ans+=mi*(a[i]);
        }
        else{
            ans+=(mi+1)*a[i];
        }
    }
    cout<<ans<<endl;
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