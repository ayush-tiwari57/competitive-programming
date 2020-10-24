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
    int n,m,sx,sy,fx,fy;
    cin>>n>>m>>sx>>sy>>fx>>fy;
    vector<int> x(m),y(m),dis(m),pos(m);
    forn(i,0,m){
        cin>>x[i]>>y[i];
        dis[i] = min( abs( x[i] - sx ), abs( y[i] - sy ) );
        pos[i]=i;
    }
    sort(all(pos),[&](int a,int b){
        return x[a]<x[b];
    });
    vector<pair<int,int>> graph[m];
    forn(i,1,m){
		int d = abs( x[pos[i]] - x[pos[i - 1]] );
        graph[pos[i]].pb( {pos[i - 1], d} );
		graph[pos[i - 1]].pb( {pos[i], d} );
    }
    sort(all(pos),[&](int a,int b){
        return y[a]<y[b];
    });
    forn(i,1,m){
		int d = abs( y[pos[i]] - y[pos[i - 1]] );
        graph[pos[i]].pb( {pos[i - 1], d} );
		graph[pos[i - 1]].pb( {pos[i], d} );
    }
    	set< pair<int, int> > s;
	for( int i = 0; i < m; ++i ) s.insert( {i, dis[i]} );
 
	while( !s.empty() )
	{
		auto [u, d] = *s.begin();
		s.erase( s.begin() );
 
		for( auto [v, d] : graph[u] )
			if( dis[u] + d < dis[v] ) {
				s.erase( {v, dis[v]} );
				dis[v] = dis[u] + d;
				s.insert( {v, dis[v]} );
			}
	}
 
	int ans = abs( sx - fx ) + abs( sy - fy );
	for( int i = 0; i < m; ++i ) ans = min( ans, dis[i] + abs( fx - x[i] ) + abs( fy - y[i] ) );
	cout << ans << endl;
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