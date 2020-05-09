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

    signed long long m,n,x,k,y,i,z,p,q,xi,yi,ans=0;
    cin>>n>>m>>x>>y;
    cin>>k;
    for(i=0;i<k;i++){
        cin>>xi>>yi;
        if (xi<0) p=(x-1);
        else p=(n-x);
        if (yi<0) q=(y-1);
        else q=(m-y);
        if (xi==0 || yi==0){
            if(xi==0) z=q/abs(yi);
            else z=p/abs(xi);
        }
        else z=min(p/abs(xi),q/abs(yi));
        ans+=z;
        x+=xi*z;
        y+=yi*z;
    }
    cout<<ans;

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