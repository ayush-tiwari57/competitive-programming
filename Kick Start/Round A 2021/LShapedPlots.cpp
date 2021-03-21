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


void solution(int t){

    // This is the main code
    int n,m,x;
    cin>>n>>m;
    int a[n][m],up[n][m],down[n][m],left[n][m],right[n][m];
    memset(down,0,sizeof(down));
    memset(up,0,sizeof(up));
    memset(left,0,sizeof(left));
    memset(right,0,sizeof(right));
    forn(i,0,n){
        forn(j,0,m) cin>>a[i][j];
    }
    //up 
    forn(i,0,n){
        forn(j,0,m){
            if(i==0) up[i][j]=a[i][j];
            else{
                if(a[i][j]){
                    up[i][j]+=up[i-1][j]+1;
                }
            }
        }
    }
    
    //down
    rforn(i,n-1,0){
        forn(j,0,m){
            if(i==n-1) down[i][j]=a[i][j];
            else{
                if(a[i][j]) down[i][j]=down[i+1][j]+1;
            }
        }
    }

    //left
    forn(i,0,n){
        forn(j,0,m){
            if(j==0) left[i][j]=a[i][j];
            else{
                if(a[i][j]) left[i][j]+=left[i][j-1]+1;
            }
        }
    }

    //right
    forn(i,0,n){
        rforn(j,m-1,0){
            if(j==m-1) right[i][j]=a[i][j];
            else{
                if(a[i][j]) right[i][j]+=right[i][j+1]+1;
            }
        }
    }
    // cout<<"Up"<<endl;
    // forn(i,0,n){
    //     forn(j,0,m) cout<<left[i][j]<<" ";
    //     cout<<endl;
    // }
    ll ans=0;
    forn(i,0,n){
        forn(j,0,m){
            //up
            if(up[i][j]>=2){
                //left
                if(left[i][j]>=2){
                    if(up[i][j]>=4){
                        x=min(left[i][j],up[i][j]/2);
                        if(x>1) ans+=x-1;
                    }
                    if(left[i][j]>=4){
                        x=min(up[i][j],left[i][j]/2);
                        if(x>1) ans+=x-1;
                    }
                }

                //right
                if(right[i][j]>=2){
                    if(up[i][j]>=4){
                        x=min(right[i][j],up[i][j]/2);
                        if(x>1) ans+=x-1;
                    }
                    if(right[i][j]>=4){
                        x=min(up[i][j],right[i][j]/2);
                        if(x>1) ans+=x-1;
                    }
                }
            }

            //down
            if(down[i][j]>=2){
                //left
                if(left[i][j]>=2){
                    if(down[i][j]>=4){
                        x=min(left[i][j],down[i][j]/2);
                        if(x>1) ans+=x-1;
                    }
                    if(left[i][j]>=4){
                        x=min(down[i][j],left[i][j]/2);
                        if(x>1) ans+=x-1;
                    }
                }

                //right
                if(right[i][j]>=2){
                    if(down[i][j]>=4){
                        x=min(right[i][j],down[i][j]/2);
                        if(x>1) ans+=x-1;
                    }
                    if(right[i][j]>=4){
                        x=min(down[i][j],right[i][j]/2);
                        if(x>1) ans+=x-1;
                    }
                }
            }

        }
    }
    cout<<"Case #"<<t<<": " <<ans<<endl;
}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("D:/competitive-programming/input.txt","r",stdin);
    // freopen("D:/competitive-programming/output.txt","w",stdout);
    // #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    forn(i,1,t+1)
    {
        solution(i);
    }
    return 0;
}