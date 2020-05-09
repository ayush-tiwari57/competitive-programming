/* code of Ayush Tiwari
    codechef- ayush572000
    codeforces- servermonk
*/

#include <bits/stdc++.h>
#define ll long long
#define Mod 1000000007
#define pb push_back
#define lb lower_bound
#define ub upper_bound


using namespace std;


void solution(){

    // This is the main code

    ll n,q,i,x,b,sum=0;
    cin>>n>>q;
    ll a[n],k[q];
    for(i=0;i<n;i++){
        cin>>x;
        sum+=x;
        a[i]=sum;
    }
    sum=0;
    for(i=0;i<q;i++){
        cin>>x;
        sum+=x;
        b=ub(a,a+n,sum)-a;
        if (b==n) b=0,sum=0;
        cout<<n-b<<endl;
    }

}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("/Users/shri/Documents/input.txt","r",stdin);
    // freopen("/Users/shri/Documents/output.txt","w",stdout);
    // #endif
    
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}