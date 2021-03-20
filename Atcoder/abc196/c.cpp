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
    ll n;
    cin>>n;
    ll temp=n;
    int len=0;
    while(temp>0){
        // res=temp%10;
        temp/=10;
        len++;
    }
    temp=n;
    int dig[len+1];
    int i=len;
    while(i>=1){
        dig[i]=temp%10;
        temp/=10;
        i--;
    }
    ll ans=0;
    for(int i=2;i<len;i+=2){
        temp=1;
        for(int j=1;j<=i/2;j++){
            if(j==1) temp*=9;
            else temp*=10;
        }
        ans+=temp;
    }
    if(len%2==0){
        temp=1;
        temp*=min(dig[1],dig[1+len/2]);
        forn(i,2,(len/2)+1) temp*=min(dig[i+len/2]+1,(1+dig[i]));
        cout<<ans+temp;
        return;
    }
    cout<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
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