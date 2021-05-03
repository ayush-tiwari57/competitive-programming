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

bool check(ll x,ll h,ll w,ll n){
    if((x/h)*(x/w)>=n) return 1;
    return 0;
}

void solution(){

    // This is the main code
    ll w,h,n;
    cin>>w>>h>>n;
    ll beg=0,end=1;
    while (!check(end,h,w,n)) end*=2;
    ll ans=0;
    while(beg<=end){
        ll mid=beg+(end-beg)/2;
        if(check(mid,h,w,n)){
            ans=mid;
            end=mid-1;
        }
        else beg=mid+1;
    }
    cout<<ans<<endl;
    
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