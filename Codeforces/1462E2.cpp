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

unsigned long long fac[200005];
unsigned long long power(unsigned long long x, int y, int p)
{
    unsigned long long res = 1; 
 
    x = x % p; 
 
    while (y > 0) 
    {
     
        if (y & 1)
            res = (res * x) % p;
 
        y = y >> 1; 
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,int p)
{
    return power(n, p - 2, p);
}
 

unsigned long long nCrModPFermat(unsigned long long n,int r, int p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

void store() {
	fac[0] = 1;
	for (int i = 1 ; i <= 200004 ; i++) {
		fac[i] = (fac[i - 1] * i) % 1000000007;
	}
}

void solution(){

    // This is the main code
    int n,m=3,k=2;
    cin>>n;
    vector<int> a(n);
    forn(i,0,n) cin>>a[i];
    sort(all(a));
    ll ans=0;
    int last=-1;
    forn(i,0,n){
        // cout<<a[i]<<" "<<a[i]+k<<endl;
        int ind=upper_bound(all(a),a[i]+k)-a.begin();
        if(ind-i>=m && last==-1){
            ans+=nCrModPFermat(ind-i,m,Mod);
            ans%=Mod;
            // cout<<i<<" "<<ind<<endl;
        }
        else if(ind >last){
            ans+=(nCrModPFermat(ind-i,m,Mod));
            ans%=Mod;
            if(last-i>=m) ans=(ans-nCrModPFermat(last-i,m,Mod)+Mod)%Mod;
        }
        last=ind;
    }
    cout<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    store();
    ll t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}