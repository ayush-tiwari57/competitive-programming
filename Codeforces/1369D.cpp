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
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


int dp[2000002];
void solution(){

    // This is the main code
    int n;
    cin>>n;
    cout<<dp[n]<<endl;

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    dp[0]=dp[1]=dp[2]=0;
    forn(i,3,2000001) dp[i]=((2*dp[i-2])%Mod+dp[i-1]%Mod+(i%3==0?4:0))%Mod;
    while (t--)
    {
        solution();
    }
    return 0;
}