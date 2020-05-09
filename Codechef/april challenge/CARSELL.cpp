/* code of Ayush Tiwari
    codechef- ayush572000
    codeforces- servermonk
*/

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define lb lower_bound
#define ub upper_bound


using namespace std;


void solution(){

    // This is the main code

    ll n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater<int>());
    ll cnt=0,sum=0,x;
    for (int i=0;i<n;i++){
        x=a[i]-cnt;
        if (x<0) x=0;
        sum+=x;
        cnt+=1;
    }
    cout<<sum%mod<<endl;

}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("/Users/shri/Documents/input.txt","r",stdin);
    // freopen("/Users/shri/Documents/output.txt","w",stdout);
    // #endif
    
    
    ll t;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}