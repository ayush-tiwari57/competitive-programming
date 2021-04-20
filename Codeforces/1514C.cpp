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
    vector<int> a;
    ll x=1;
    forn(i,1,n){
        if(__gcd(i,n)==1){
            a.pb(i);
            x*=i;
            x%=n;
        }
    }
    if(x%n==1){
        cout<<a.size()<<endl;
        for(auto z: a) cout<<z<<" ";
        cout<<endl;
    }
    else{
        int y=x%n;
        cout<<a.size()-1<<endl;
        for(auto z:a){
            if(z!=y) cout<<z<<" ";
        }
        cout<<endl;
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