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
    map<ll,ll> m;
    int n;
    cin>>n;
    vector<ll> a(n);
    ll ans=0,ma=0;
    forn(i,0,n){
        cin>>a[i];
        ma=max(ma,a[i]);
    }
    sort(all(a));
    forn(i,0,n){
        int j=0;
        while(a[i]+j*200<=ma){
            if(m[j*200+a[i]] || m[a[i]-j*200]){
                ans+=m[j*200+a[i]]+m[a[i]-j*200];
            }
            j++;
        }
        m[a[i]]++;
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