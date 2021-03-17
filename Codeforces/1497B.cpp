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


void solution(){

    // This is the main code
    int n,m,x;
    cin>>n>>m;
    map<int,int> ma;
    forn(i,0,n){
        cin>>x;
        ma[x%m]++;
    }
    int ans=0;
    if(ma[0]) ans=1;
    forn(i,1,m){
        if(ma[i] && ma[m-i]){
            if(i==m-i){
                ans++;
                ma[i]=0;
            }
            else{

            if(ma[i]==ma[m-i]){
                ma[m-i]=0;
                ma[i]=0;
                ans++;
            }
            else{
                if(ma[m-i]>ma[i]){
                    ma[m-i]-=(ma[i]+1);
                    ma[i]=0;
                    ans++;
                }
                else{
                    ans++;
                    ma[i]-=(ma[m-i]+1);
                    ma[m-i]=0;
                }
            }
            }
        }
    }
    forn(i,1,m){
        if(ma[i]) ans+=ma[i];
    }
    cout<<ans<<endl;
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