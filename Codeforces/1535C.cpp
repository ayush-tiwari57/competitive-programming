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
    string s;
    cin>>s;
    int pos0=-1,pos1=-1,n=s.size(),j=0,prev=0;
    ll ans=0;
    forn(i,0,n){
        if(s[i]=='0'){
            if(pos0>pos1){
                if((i-pos0+1)%2==0){
                    // ans+=i-pos0-1;
                    // ans+=i-j-1;
                    j=pos0+1;
                }
            }
            else{
                if(pos1!=-1 && (i-pos1+1)%2!=0){
                    // ans+=i-j-1;
                    // ans+=i-pos1-1;
                    j=pos1+1;
                }
            }
            pos0=i;
        }
        else if(s[i]=='1'){
            if(pos0>pos1){
                if((i-pos0+1)%2!=0){
                    // ans+=i-j-1;
                    // ans+=i-pos0-1;
                    j=pos0+1;
                }
            }
            else{
                if(pos1!=-1 && (i-pos1+1)%2==0){
                    // ans+=i-j-1;
                    // ans+=i-pos1-1;
                    j=pos1+1;
                }
            }
            pos1=i;
        }
        ans+=i-j+1;
        // prev=((i-j+1)*(i-j))/2;
    }
    // cout<<j<<endl;
    // ans+=n-j;
    cout<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}