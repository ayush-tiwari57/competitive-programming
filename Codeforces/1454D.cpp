/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long

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

vector<ll> primeFactors(ll n)  
{  
    vector<ll> factor;
    while (n % 2 == 0)  
    {  
        factor.pb(2);
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (ll i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            factor.pb(i);
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        factor.pb(n);
    return factor;
}  

void solution(){

    // This is the main code
    ll n;
    cin>>n;
    vector<ll> factor=primeFactors(n);
    map<ll,ll> cnt;
    ll ma=-1,no;
    for(auto x:factor){
        cnt[x]++;
        if(cnt[x]>ma){
            ma=cnt[x];
            no=x;
        }
    }
    cout<<ma<<endl;
    vector<ll> ans;
    forn(i,0,ma) ans.pb(no);
    for(auto x: factor){
        if(x!=no){
            ans[ma-1]*=x;
        }
    }
    for(auto x: ans) cout<<x<<" ";
    cout<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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