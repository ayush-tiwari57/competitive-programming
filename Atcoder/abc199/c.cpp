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
    string s;
    cin>>s;
    int q;
    cin>>q;
    // n*=2;
    int flag=0,t,a,b;
    forn(i,0,q){
        cin>>t>>a>>b;
        if(t==1){
            if(flag){
                if(a<=n) a+=n;
                else a-=n;
                if(b<=n) b+=n;
                else b-=n;
                // cout<<a<<" "<<b<<endl;
                auto x=s[a-1];
                s[a-1]=s[b-1];
                s[b-1]=x;
            }
            else{
                auto x=s[a-1];
                s[a-1]=s[b-1];
                s[b-1]=x;
            }
        }
        else flag=1-flag;
        // cout<<s<<" "<<flag<<endl;
    }
    if(flag){
        string temp="";
        forn(i,0,n) temp+=s[i];
        forn(i,n,2*n) cout<<s[i];
        cout<<temp;
    }
    else cout<<s;
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