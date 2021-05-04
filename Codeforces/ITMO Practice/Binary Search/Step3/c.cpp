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

bool check(ll x,vector<ll> a,int k){
    int cnt=0;
    ll prev=a[0];
    forn(i,1,a.size()){ 
        if(a[i]-prev>=x){
            prev=a[i];
            cnt++;
        }
    }
    if(cnt+1>=k) return 1;
    return 0;
}

void solution(){

    // This is the main code
    int n,k;
    cin>>n>>k;
    vector<ll> a(n);
    forn(i,0,n) cin>>a[i];
    ll beg=0,end=1e15,ans=0;
    while(beg<=end){
        ll mid=(beg+end)/2;
        if(check(mid,a,k)){
            beg=mid+1;
            ans=mid;
        }
        else end=mid-1;
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