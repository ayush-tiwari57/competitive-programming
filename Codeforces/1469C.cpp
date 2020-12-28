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
    ll n,k;
    cin>>n>>k;
    ll a[n];
    forn(i,0,n) cin>>a[i];
    ll mn=a[0],mx=a[0];
    forn(i,1,n){
        mn-=k-1;
        mx+=k-1;
        mn=max(mn,a[i]);
        mx=min(mx,a[i]+k-1);
        if(mn>mx){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(mn==a[n-1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;  
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