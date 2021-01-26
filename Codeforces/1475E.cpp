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

unsigned long long fac[1003];
unsigned long long power(unsigned long long x, 
                                  int y, int p)
{
    unsigned long long res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0) 
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,  
                                            int p)
{
    return power(n, p - 2, p);
}
 
// Returns nCr % p using Fermat's little
// theorem.
unsigned long long nCrModPFermat(unsigned long long n,
                                 int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

void solution(){

    // This is the main code

    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    map<int,int> m;
    forn(i,0,n){
        cin>>a[i];
        m[a[i]]++;
    }
    sort(all(a), greater<int> ());
    int cnt=m[a[k-1]];
    int z,y;
    forn(i,0,n){
        if(a[i]==a[k-1]){
            y=i;
            break;
        }
    }
    rforn(i,n-1,0){
        if(a[i]==a[k-1]){
            z=i;
            break;
        }
    }
    // cout<<z<<" "<<y<<endl;
    cout<<nCrModPFermat(cnt, k-y, Mod)<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    fac[0] = 1;
    for (int i = 1; i <= 1001; i++)
        fac[i] = (fac[i - 1] * i) % Mod;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}