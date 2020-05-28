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

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 1000004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


void solution(){

    // This is the main code

      int n;
  cin>>n;
  int a[n][2],deg[n]={},mex=-1;
  forn(i,0,n-1)
  {
    cin>>a[i][0]>>a[i][1];
    deg[a[i][0]]++;
    deg[a[i][1]]++;
    if(deg[a[i][1]]==3) mex=a[i][1];
    if(deg[a[i][0]]==3) mex=a[i][0];
  }
  if(mex==-1)
    forn(i,0,n-1) cout<<i<<endl;
  else
  {
    int r=0,l=n-2;
    forn(i,0,n-1)
      if(a[i][0]==mex or a[i][1]==mex) cout<<r++<<endl;
      else cout<<l--<<endl;
  }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}