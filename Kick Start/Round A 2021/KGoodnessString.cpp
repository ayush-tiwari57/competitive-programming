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


void solution(int t){

    // This is the main code
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=n/2-1;i>=0;i--){
        if(s[i]!=s[n-i-1]) cnt++;
    }
    cout<<"Case #"<<t<<": " <<abs(k-cnt)<<endl;
    
}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("D:/competitive-programming/input.txt","r",stdin);
    // freopen("D:/competitive-programming/output.txt","w",stdout);
    // #endif  
    
    // FIO()/   
    
    ll t=1;
    cin>>t;
    forn(i,1,t+1)
    {
        solution(i);
    }
    return 0;
}