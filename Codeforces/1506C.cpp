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
    string a,b;
    cin>>a;
    cin>>b;
    int n=a.size();
    int m=b.size();
    int ans=n+m;
    forn(i,0,n){
        string a1="";
        forn(j,i,n){
            a1+=a[j];
            int len=j-i+1;
            forn(k,0,m-len+1){
                string b1="";
                forn(q,k,k+len) b1+=b[q];
                if(a1==b1){
                    // cout<<a1<<endl;
                    // cout<<b1<<endl;
                    // cout<<i<<" "<<j<<" "<<k<<" "<<len<<endl;
                    ans=min(ans,i+n-j-1+k+m-(k+len));
                }
            }
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
    
    ll t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}