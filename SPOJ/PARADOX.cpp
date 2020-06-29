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
    
    while(1){
        int n;
        cin>>n;
        if(n==0) return;
        int actual[n+1],expected[n+1],flag=0,a[n+1];
        string type;
        forn(i,1,n+1){
            cin>>a[i]>>type;
            if(type[0]=='t')  actual[i]=1;
            else actual[i]=0;
        }  
        forn(i,1,n+1){
            int vis[n+1];
            memset(vis,0,sizeof(vis));
            memset(expected,0,sizeof(expected));
            if(vis[i]==0){
                vis[i]=1;
                expected[i]=1;
                int temp=a[i];
                int temp1=expected[i];
                int save=actual[i];
                while(vis[temp]==0){
                    if(temp1==1) expected[temp]=save;
                    else expected[temp]=1-save;
                    vis[temp]=1;
                    temp1=expected[temp];
                    save=actual[temp];
                    temp=a[temp];
                }
                if(temp1==1 && save!=expected[temp]) flag=1;
                if(temp1==0 && save==expected[temp]) flag=1;
            }
            if(flag==1) break;
        }
        if(flag==0) cout<<"NOT PARADOX"<<endl;
        else cout<<"PARADOX"<<endl;
    }

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