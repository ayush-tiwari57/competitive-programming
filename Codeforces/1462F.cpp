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


void solution(){

    // This is the main code
    int n,l,r;
    cin>>n; 
    vector<pair<int,int>> a;
    vector<int> left;
    vector<int> right;
    forn(i,0,n){
        cin>>l>>r;
        a.pb({l,r});
        left.pb(l);
        right.pb(r);
    }
    sort(all(left));
    sort(all(right));
    int ans=n;
    forn(i,0,n){
        l=a[i].first;
        r=a[i].second;
        int leftcnt=(lower_bound(all(right),l)-right.begin());
        int rightcnt=(lower_bound(all(left),r+1)-left.begin());
        leftcnt--;
        rightcnt=n-rightcnt+1;
        // cout<<i<<" "<<leftcnt<<" "<<rightcnt<<endl;
        ans=min(ans,leftcnt+rightcnt);
    }
    cout<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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