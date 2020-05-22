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

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 1000004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


void solution(){

    // This is the main code
    string s;
    cin>>s;
    ll cnt=0;
    forn(i,0,s.size()) if((s[i]-'0')%4==0) cnt++;
    forn(i,1,s.size()){
        if (((s[i-1]-'0')*10+s[i]-'0')%4==0) cnt+=i;
    }
    cout<<cnt;
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