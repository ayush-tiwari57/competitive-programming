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
#define maxn 300004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int m[maxn];
void solution(){

    // This is the main code
    int n,k;
    cin>>n>>k;
    int a[n];
    forn(i,0,n) cin>>a[i];
    forn(i,0,n) m[a[i]]++;
    ll ans=0;
    forn(i,0,maxn){
        if(k<=0) break;
        if(!m[i]){
            // cout<<i<<endl;
            ans+=i*k;
            break;
        }
        if(m[i]<k){
            ans+=i*(k-m[i]);
            k-=(k-m[i]);
        }
        // cout<<ans<<endl;
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
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}