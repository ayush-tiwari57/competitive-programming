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
    int n;
    cin>>n;
    vector<string> v;
    forn(i,0,n){
        string s;
        cin>>s;
        v.pb(s);
    }
    int flag=0,x1,y1,x2,y2;
    forn(i,0,n){
        forn(j,0,n){
            if(v[i][j]=='*'){
                if(!flag){
                    x1=i;
                    y1=j;
                    flag=1;
                }
                else{
                    x2=i;
                    y2=j;
                }
            }
        }
    }
    // cout<<x1<<" "<<y1<<endl;
    // cout<<x2<<" "<<y2<<endl;
    if(x1!=x2 && y1!=y2){
        // cout<<"ye";
        v[x1][y2]='*';
        v[x2][y1]='*';
    }
    else{
        if(x1==x2){
            if(x1==0){
                v[x1+1][y1]='*';
                v[x2+1][y2]='*';
            }
            else{
                v[x1-1][y1]='*';
                v[x2-1][y2]='*';
            }
        }
        else{
            if(y1==0){
                v[x1][y1+1]='*';
                v[x2][y2+1]='*';
            }
            else{
                v[x1][y1-1]='*';
                v[x2][y2-1]='*';
            }
        }
    }
    forn(i,0,n){
        forn(j,0,n) cout<<v[i][j];
        cout<<endl;
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