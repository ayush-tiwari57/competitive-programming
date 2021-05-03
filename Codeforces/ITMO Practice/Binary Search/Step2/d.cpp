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

int a[1001][3],num[1001];

bool check(int t,int n,int m){
    int ans=0;
    forn(i,0,n){
        int x=t/a[i][0];
        int y=x/a[i][1];
        if(x%a[i][1]==0) y--; 
        if(x>a[i][1]) x=(t-(y*a[i][2]))/a[i][0];
        ans+=x;
    }
    if(ans>=m) return 1;
    return 0;
}

void func(int t,int n,int m){
    int ans=0;
    forn(i,0,n){
        int x=t/a[i][0];
        int y=x/a[i][1];
        if(x%a[i][1]==0) y--; 
        if(x>a[i][1]) x=(t-(y*a[i][2]))/a[i][0];
        if(ans+x>=m){
            num[i]=m-ans;
            break;
        }
        ans+=x;
        num[i]=x;
    }
}

void solution(){

    // This is the main code
    int n,m;
    cin>>m>>n;
    forn(i,0,n) cin>>a[i][0]>>a[i][1]>>a[i][2];
    int beg=0,end=1;
    while(!check(end,n,m)) end*=2;
    int ans=0;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(check(mid,n,m)){
            ans=mid;
            end=mid-1;
        }
        else beg=mid+1;
    }
    cout<<ans<<endl;
    func(ans,n,m);
    forn(i,0,n) cout<<num[i]<<" ";
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}