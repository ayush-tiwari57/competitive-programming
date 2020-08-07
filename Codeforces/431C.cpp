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
#define maxn 204
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;
int ans=0;

// void func(int k,int d,int sum, int cnt){
//     if(sum<0) return;
//     if(sum==0){
//         if(cnt>0) ans++;
//         return;
//     }
//     forn(i,1,k+1){
//         if(i>=d) func(k,d,sum-i,cnt+1);
//         else func(k,d,sum-i,cnt);
//     }
// }

int dp[maxn];

void func(int n,int k,int d,int sum,int cnt,int dep){
    if(sum>n) return;
    if(sum==n){
        if(cnt>0){
            ans++;
        }
        return;
    }
    forn(i,1,k+1){
        if(i>=d) func(n,k,d,sum+i,cnt+1,dep+1);
        else func(n,k,d,sum+i,cnt,dep+1);
    }
}

void solution(){

    // This is the main code
    int n,k,d;
    cin>>n>>k>>d;
    func(n,k,d,0,0,0);
    cout<<ans;
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