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
    int n,m,u,i,j,x;
    int cnt = 1,map[1001];
    cin>>n>>m;
    int column[m][n],row[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) cin >> row[i][j];
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) cin >> column[i][j];
    }
    for (i = 0; i < m; i++) {
        x = column[i][0];
        int f = 0;
        for (j = 0; j < n; j++) {
            if (x == row[j][0]) {
                map[0] = j;
                f = 1;
                break;
            }
        }
        if (f) {
            forn(j,1,n) {
                x = column[i][j];
                forn (y,0,n) {
                    if (x == row[y][0]) {
                        cnt++;
                        map[cnt-1] = y;
                        break;
                    }
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        x = map[i];
        for (j = 0; j < m; j++) cout << row[x][j] << " ";
        cout << endl;
    }
    
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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