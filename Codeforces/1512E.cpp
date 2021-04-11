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
    int n,l,r,req;
    cin>>n>>l>>r>>req;
    int x=r-l+1;
    if(req>=(x*(x+1))/2 && req<=(x*(2*n+1-x))/2){
        vector<int> temp;
        for(int i=1;i<=x;i++) temp.pb(i);
        int s=(x*(x+1))/2;
        int flag=0,z=0;
        for(int i=x-1;i>=0;i--){
            int y=temp[i];
            if(s==req) break;
            for(int j=y+1;j<=n-z;j++){
                s-=temp[i];
                temp[i]=j;
                s+=j;
                if(s==req){
                    flag=1;
                    break;
                }
            }
            z++;
            if(flag) break;
        }
        // forn(i,0,x) cout<<temp[i]<<" ";
        int ans[n];
        map<int,int> m;
        z=0;
        forn(i,l-1,r){
            ans[i]=temp[z];
            m[temp[z]]=1;
            z++;
        }
        forn(i,0,n){
            if(i>=l-1 && i<r) continue;
            forn(j,1,n+1){
                if(!m[j]){
                    m[j]=1;
                    ans[i]=j;
                    break;
                }
            }
        }
        forn(i,0,n) cout<<ans[i]<<" ";
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }
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