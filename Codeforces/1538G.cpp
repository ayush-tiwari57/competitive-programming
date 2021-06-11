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

bool check(ll x,ll y,ll a,ll b,ll cnt){
    ll beg=0,end=cnt;
    while(beg<=end){
        ll mid=beg+(end-beg)/2;
        ll s1=mid,s2=cnt-mid;
        ll x1=a*s1+b*s2;
        ll y1=b*s1+a*s2;
        if(x1<=x && y1<=y) return true;
        if(x1>x){
            if(a>b){
                end=mid-1;
            }
            else beg=mid+1;
        }
        else{
            if(a>b){
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return false;
}

void solution(){

    // This is the main code
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    // if(a<b) swap(a,b);   
    ll beg=0,end=1e9,ans=0;
    while(beg<=end){
        ll mid=beg+(end-beg)/2;
        if(check(x,y,a,b,mid)){
            ans=mid;
            beg=mid+1;
        }
        else end=mid-1;
    }
    cout<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}