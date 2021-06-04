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
    int n;
    cin>>n;
    vector<int> v(n);
    forn(i,0,n) cin>>v[i];
    vector<int> a(n);
    int i=0,j=0;
    while(i<n){
        if(v[i]%2==0) {
            a[j]=v[i];
            j++;
        }
        i++;
    }
    i=0;
    while(i<n){
        if(v[i]%2!=0){
            a[j]=v[i];
            j++;
        }
        i++;
    }
    ll ans=0;
    forn(i,0,n){
        forn(j,i+1,n){
            if(__gcd(a[i],2*a[j])>1) ans++;
        }
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
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}