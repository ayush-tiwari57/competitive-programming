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
    string s;
    cin>>s;
    vector<int> flag(n,0);
    int ans=0;
    rforn(c,25,1){
        forn(i,0,n){
            if(flag[i]) continue;
            if(s[i]-'a'==c-1){
                int j=i-1;
                while(j>=0){
                    if(!flag[j] && s[j]-'a'!=c) break; 
                    if(!flag[j]) ans++;
                    flag[j]=1;
                    j--;
                }
                j=i+1;
                while(j<n){
                    if(!flag[j] && s[j]-'a'!=c) break;
                    if(!flag[j]) ans++;
                    flag[j]=1;
                    j++;
                }
            }
        }
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
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}