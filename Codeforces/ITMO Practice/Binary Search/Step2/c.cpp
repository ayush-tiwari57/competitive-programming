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

bool check(int n,int x,int y,int t){
    int ans=0;
    int temp=t;
    t-=min(x,y);
    if(t>=0) ans++;
    int t1=t;
    while(t-x>=0){
        t-=x;
        ans++;
    }
    while(t1-y>=0){
        t1-=y;
        ans++;
    }
    // cout<<ans<<" "<<temp<<endl;
    if(ans>=n) return 1;
    return 0;
}

void solution(){

    // This is the main code
    int n,x,y;
    cin>>n>>x>>y;
    int beg=0,end=1;
    while (!check(n,x,y,end)) end*=2;
    // cout<<end;
    int ans=0;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        // cout<<mid<<endl;
        // cout<<"yo"<<" "<<mid<<" "<<check(n,x,y,mid)<<endl;
        if(check(n,x,y,mid)){
            ans=mid;
            end=mid-1;
        }
        else beg=mid+1;
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
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}