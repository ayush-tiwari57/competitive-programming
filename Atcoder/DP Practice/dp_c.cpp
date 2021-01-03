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

int n;
int a[maxn][4],dp[maxn][4];

int func(int day,int flag){
    if(day==n) return 0;
    if(dp[day][flag]!=-1) return dp[day][flag];
    int m=-1;
    if(flag==0){
        m=max(m,a[day][1]+func(day+1,1));
        m=max(m,a[day][2]+func(day+1,2));
        m=max(m,a[day][3]+func(day+1,3));
    }
    else if(flag==1){
        m=max(m,a[day][2]+func(day+1,2));
        m=max(m,a[day][3]+func(day+1,3));
    }
    else if(flag==2){
        m=max(m,a[day][1]+func(day+1,1));
        m=max(m,a[day][3]+func(day+1,3));
    }
    else{
        m=max(m,a[day][2]+func(day+1,2));
        m=max(m,a[day][1]+func(day+1,1));
    }
    dp[day][flag]=m;
    return m;
}

void solution(){

    // This is the main code
    cin>>n;
    memset(dp,-1,sizeof(dp));
    forn(i,0,n){
        forn(j,1,4) cin>>a[i][j];
    }
    cout<<func(0,0);

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