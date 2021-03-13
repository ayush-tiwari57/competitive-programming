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


void solution(){

    // This is the main code
    ll n;
    cin>>n;
    int dig=0;
    ll x=n;
    while(x>0){
        dig++;
        x/=10;
    }
    if(dig<=3) cout<<0<<endl;
    else{
        ll ans=0;
        forn(i,4,dig){
            // cout<<pow(10,i)<<endl;
            ans+=(pow(10,i)-pow(10,i-1))*((i-1)/3);
        }
        // cout<<pow(10,dig)<<endl;
        ans+=((n-pow(10,dig-1))+1)*((dig-1)/3);
        cout<<ans<<endl;
    }
    
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}