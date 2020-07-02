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
    int n,k,x,y;
    cin>>n>>k;
    int a[n+1][n+1];
    forn(i,1,n+1){
        forn(j,1,n+1) a[i][j]=0;
    }
    queue<pair<int,int>> q;
    forn(i,1,n+1){
        forn(j,1,n+1){
            if(i==j) q.push(mp(i,j));
        }
    }
    while(k>0){
        x=q.front().first;
        y=q.front().second;
        // cout<<x<<" " <<y<<endl;
        a[x][y]=1;
        y++;
        if (y>n) y=1;
        q.push(mp(x,y));
        q.pop();

        k--;
    }
    int z=0,zc=0,mr=-1,mir=100000,mc=-1,mic=100000;
    forn(i,1,n+1){
        z=0;
        zc=0;
        forn(j,1,n+1){
            z+=a[i][j];
            zc+=a[j][i];
            // cout<<a[i][j];
        }
        // cout<<endl;
        mic=min(zc,mic);
        mc=max(zc,mc);
        mir=min(mir,z);
        mr=max(mr,z);
    }
    int ans=(mr-mir)*(mr-mir)+(mc-mic)*(mc-mic);
    cout<<ans<<endl;
    forn(i,1,n+1){

        forn(j,1,n+1){

            cout<<a[i][j];
        }
        cout<<endl;

    }
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