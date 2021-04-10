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
ll dp[10000002];
ll sum(int x){
    ll s=0;
    for(int i=1;i<=sqrt(x);i++){
        if(x%i==0){
            if(dp[i] && dp[x/i]){

                if(x/i!=i)
                s=dp[i]+dp[x/i];
                else s=dp[i]+dp[x/i];
                return s;
            }
            else{
                if(x/i==i) s+=i;
                else{
                    s+=i;
                    s+=x/i;
                }
            }
            // cout<<i<<" "<<s<<endl;
        }
    }
    return s;
}

void solution(){

    // This is the main code
    ll n;
    cin>>n;
    // cout<<sum(2)<<endl;
    int beg=1,end=n-1,last=-1;
    forn(i,1,n+1){
        // cout<<sum(i)<<endl;
        if(dp[i]==n){
            cout<<i<<endl;
            return;

        }
    }
    cout<<-1<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    dp[0]=0;
    dp[1]=1;
    forn(i,2,10000001) dp[i]=sum(i)+i;
    ll t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}