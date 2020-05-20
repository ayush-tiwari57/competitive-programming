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
    int n,i;
    cin>>n;
    string s[2];
    cin>>s[0]>>s[1];
    int row=0;
    for(i=0;i<n;i++){
        if(s[row][i]>'2'){
            row++;
            row%=2;
            if (s[row][i]<='2') break;
        }
    }
    if (i!=n || row!=1) cout<<("NO")<<endl;
    else cout<<("YES")<<endl;
}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("/Users/shri/Documents/input.txt","r",stdin);
    // freopen("/Users/shri/Documents/output.txt","w",stdout);
    // #endif
    
    
    ll t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}