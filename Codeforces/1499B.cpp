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
    string s;
    cin>>s;
    int n=s.size(),ind=-1,ind2=-1;
    forn(i,1,n){
        if(s[i]==s[i-1] && s[i]=='1'){
            ind=i-1;
            break;
        }
    }
    rforn(i,n-2,0){
        if(s[i]==s[i+1] && s[i]=='0'){
            ind2=i;
            break;
        }
    }
    if(ind2==-1 || ind==-1){
        cout<<"YES"<<endl;
        return;
    }
    if(ind2>ind) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
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