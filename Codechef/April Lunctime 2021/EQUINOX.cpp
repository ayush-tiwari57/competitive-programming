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
    ll n,a,b;
    cin>>n>>a>>b;
    ll s1=0,s2=0;
    forn(i,0,n){
        string s;
        cin>>s;
        if(s[0]=='E' || s[0]=='Q' || s[0]=='I' || s[0]=='U' || s[0]=='N' || s[0]=='O' || s[0]=='X'){
            s1+=a;
        }
        else s2+=b;
    }
    if(s1>s2) cout<<"SARTHAK"<<endl;
    else if(s1==s2) cout<<"DRAW"<<endl;
    else cout<<"ANURADHA"<<endl;
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