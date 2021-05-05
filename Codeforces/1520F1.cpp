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
#define flu cout.flush

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
    int t,n,k;
    cin>>t>>n;
    cin>>k;
    bool done = false;
	int beg = 1, end = n;

	cout << "? " << beg << " " << end << endl;
	flu();
	int sum, ans; cin >> sum;

	while (beg < end) {
		int m = beg+(end-beg)/2;
		cout << "? " << beg << " " << m << endl;
        flu();
		int x; cin >> x;

		int diff = (m - beg + 1) - x;
		if (diff < k) {
            beg = m + 1;
			k -= diff;
        }
		else {
			end = m;
		}
	}
    cout << "! " << beg << endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    // cin>>t;
    while (t--)
    {
        solution(); 
    }
    return 0;
}