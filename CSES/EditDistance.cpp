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

vector<vector<int>> dp;

int func(string s1,string s2,int i,int j){
    if(i==0 || j==0) return 0;
    if(dp[i-1][j-1]!=-1) return dp[i-1][j-1];
    int ans=0;
    if(s1[i-1]==s2[j-1]) ans=1+func(s1,s2,i-1,j-1);
    else ans=max(func(s1,s2,i-1,j),func(s1,s2,i,j-1));
    return dp[i-1][j-1]=ans;    
}

void solution(){

    // This is the main code
    string s1,s2;
    cin>>s1>>s2;
    dp.assign(s1.size()+1, vector<int>(s2.size()+1,0));
    cout<<max(s1.size(),s2.size())-func(s1,s2,s1.size(),s2.size());    
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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