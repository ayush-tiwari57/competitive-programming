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

// ll a[501][501],row[501];
void solution(){

    // This is the main code
  int n,m,q,t1,t2;
  cin>>n>>m>>q;
 
  int a[n][m];
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      cin>>a[i][j];
 
  int cnt[n];
  for(int i=0;i<n;++i)
  {
    int x=0,ma=0;
    for(int j=0;j<m;++j)
      if(a[i][j]) x++;
      else
        ma=max(x,ma),x=0;
    cnt[i]=max(x,ma);
  }
 
  while(q--)
  {
    cin>>t1>>t2;
    a[--t1][--t2]^=1;
 
    int x=0,ma=0;
    for(int j=0;j<m;++j)
      if(a[t1][j]) x++;
      else
        ma=max(x,ma),x=0;
    cnt[t1]=max(x,ma);
 
    ma=-1;
    for(auto i:cnt) ma=max(ma,i);
    cout<<ma<<"\n";
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