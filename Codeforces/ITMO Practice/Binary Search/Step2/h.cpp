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
vector<ll> avail(3),price(3),req(3);
ll ruble;
bool check(ll num){
    ll amount=0;
    forn(i,0,3){
        ll x=num*req[i];
        amount+=max(0LL,(x-avail[i])*price[i]);
    }
    if(amount<=ruble) return 1;
    return 0;

}

void solution(){

    // This is the main code
    string s;
    cin>>s;
    forn(i,0,s.size()){
        if(s[i]=='B') req[0]++;
        else if(s[i]=='S') req[1]++;
        else req[2]++;
    }
    forn(i,0,3) cin>>avail[i];
    forn(i,0,3) cin>>price[i];
    cin>>ruble;
    ll beg=0,end=1e15;
    ll ans=0;
    
    while(beg<=end){
        ll mid=beg+(end-beg)/2;
        if(check(mid)){
            // cout<<mid<<endl;
            ans=mid;
            beg=mid+1;
        }
        else end=mid-1;
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