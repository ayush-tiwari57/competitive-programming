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
     int n;
  cin >> n;
  vector<int> min_pos(n + 1, 0), dis(n + 1, -1);
  for (int i = 1; i <= n; ++i) {
    int temp;
    cin >> temp;
    dis[temp] = max(dis[temp], i - min_pos[temp]);
    min_pos[temp] = i;
  }

  vector<int> ans(n + 2, INT_MAX);

  for (int i = 1; i <= n; ++i) {
    dis[i] = max(dis[i], n + 1 - min_pos[i]);
    ans[dis[i]] = min(ans[dis[i]], i);
  }
  int num = INT_MAX;
  forn(i,1,n+1) {
    num = min(num, ans[i]);
    if (num == INT_MAX) cout << "-1 ";
    else cout << num << " ";
  }
  cout << endl;
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