/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
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
    int n,m; cin >> n >> m;
	int color[n];
	vector<pair<int,int>> v;
	map<int,set<int>> g;
	
	for(int i = 0; i < n; i++) {
		cin >> color[i];
	}
	
	for(int i = 0; i < m; i++){
		int a,b; cin >> a >> b;
		a--,b--;
		if(color[a] != color[b]){
			g[color[a]].insert(color[b]);
			g[color[b]].insert(color[a]);
		}
	}
	int size = -1;
	int Ans = -1;
	sort(color, color + n);
	for(int i = 0; i < n; i++){
		
		if(size < (int)g[color[i]].size()){
			size = g[color[i]].size();
			Ans = color[i];
		}
	}	
	cout << Ans << endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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