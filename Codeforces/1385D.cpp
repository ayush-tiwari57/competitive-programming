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

char a[maxn];

int cost(int beg, int end, int c){
    int cnt=0;
    forn(i,beg,end+1){
        if(a[i]!=c) cnt++;
    }
    return cnt;
}

int func(int l,int r, int c){
    if(l==r){
        if (a[l]==c) return 0;
        return 1;
    }
    int mid = (l+r)/2;
    return min(cost(l,mid,c)+func(mid+1,r,c+1),cost(mid+1,r,c)+func(l,mid,c+1));
}

void solution(){

    // This is the main code
    int n;
    cin>>n;
    forn(i,1,n+1) cin>>a[i];
    int ans=func(1,n,'a');
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