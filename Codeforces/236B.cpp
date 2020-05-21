/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define Mod 1073741824
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int d[1000033];
void solution(){

    // This is the main code
    int a,b,c,x,i;
    ll s=0;
    cin>>a>>b>>c;
    forn(i,1,1000001){
        for(int j=i;j<=1000000;j+=i){
            d[j]++;
        }
    }
    forn(i,1,a+1){
        forn(j,1,b+1){
            forn(k,1,c+1){
                s+=d[i*j*k];
                s%=Mod;
            }
        }
    }
    cout<<s%Mod;

}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("E:/CP/input.txt","r",stdin);
    // freopen("E:/CP/output.txt","w",stdout);
    // #endif  
    
    FIO()   
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}