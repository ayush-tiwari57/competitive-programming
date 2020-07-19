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
#define all(vii) vii.begin(), vii.end()

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
    int n,i,m,j;
    string ans="abacaba",s;
  cin>>n>>s;
  int cnt=0;
  forn(i,0,n-6){
    int flag=1;
    forn(j,0,7){
      if(s[i+j]!=ans[j]) flag=0;
    }
    if(flag) cnt++;
  }
  if(cnt==1){
    cout<<"YES"<<endl;
    forn(i,0,n){
      if(s[i]=='?') cout<<"x";
      else cout<<s[i];
    }
    cout<<endl;
    return;
  }
  else if(cnt>1) { 
      cout<<"NO"<<endl; 
      return;
    }
  vector<int> vii;
  forn(i,0,n-6){
    int flag=1;
    forn(j,0,7){
      if(s[i+j]=='?') continue;
      if(s[i+j]!=ans[j]) flag=0;
    }
    if(flag){
      vii.pb(i);
    }
  }
  if(vii.size()==0) { cout<<"NO"<<endl; return; }
  
  for(auto it:vii){
    string copy=s;
    forn(j,0,7) copy[it+j]=ans[j];
    forn(i,0,n) if(copy[i]=='?') copy[i]='x';
    int cnt=0;
    forn(i,0,n-6){
      int flag=1;
      forn(j,0,7){
        if(copy[i+j]!=ans[j]) flag=0;
      }
      if(flag) cnt++;
    }

    if(cnt==1){
      cout<<"YES"<<endl<<copy<<endl;
      return;
    }
  }
  cout<<"NO"<<endl;

}



int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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