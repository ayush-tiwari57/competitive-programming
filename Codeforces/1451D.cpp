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

int check(ll x,ll y,ll i,ll j,ll z,int f,ll n,ll k){
    while (z <= n * n)
    {
        f = 1-f;
        if (f == 0) y += k;
        else x += k;
        j = y * y; i = x * x;
        z = j + i;
    }
    return f;
}
void solution(){

    // This is the main code
    ll k,n;
    ll j,i;
    cin >> n >> k;
    ll f = 0;
    ll x = 0, y = 0;
    j = y * y; i = x * x;
    ll z = i+j;

    if(check(x,y,i,j,z,f,n,k)==1) cout << "Utkarsh" << endl;
    else cout << "Ashish" << endl;
    
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