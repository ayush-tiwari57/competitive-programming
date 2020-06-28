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
#define m 100000000

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

ll dp[109][109][2];

void solution(){

    // This is the main code
    ll n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
    dp[0][0][0]=dp[0][0][1]=1;
    for(int i=0;i<=n1;i++){
    for(int j=0;j<=n2;j++){
        for(int k=1;k<=k1&&i>=k;k++)  (dp[i][j][0]+=dp[i-k][j][1])%=m;
        for(int k=1;k<=k2&&j>=k;k++)  (dp[i][j][1]+=dp[i][j-k][0])%=m;
    }
}
    cout<<(dp[n1][n2][0]+dp[n1][n2][1])%m;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}