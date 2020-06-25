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


void solution(){

    // This is the main code
    int n;
    ll ans=0;
    cin>>n;
    vector<int> a(n+1),pre(n+1,0);
    map<int,pair<int,int> > cnt;
    cnt[0].first++;
    
    forn(i,1,n+1){
        cin>>a[i];
        pre[i]=a[i]^pre[i-1];
        if(i%2==0){
            ans+=cnt[pre[i]].first;
            cnt[pre[i]].first++;
        }
        else{
            ans+=cnt[pre[i]].second;
            cnt[pre[i]].second++;
        }
    }
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