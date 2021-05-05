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
    int n;
	string s;
	cin >> n;
    cin>> s;

	vector<int> ind;
	for (int i = 0; i < n; ++i)
		if (s[i] == '*') ind.pb(i);

	int indsize = ind.size();

	indsize/=2;
    if(indsize==0){
        cout<<0<<endl;
        return;
    }

	int mid = ind[indsize];
	string left = s.substr(0, mid + 1);
	string right = s.substr(mid + 1);

	reverse(all(right));
    ll cnt = 0, ans = 0, temp = 0;

	for (int i = 0; i < left.size(); ++i) {
		if (left[i] == '*') {
			ans += temp;
			cnt++;
			temp = 0;
		}
		else {
			temp += cnt;
		}
	}
	ans += temp;
    temp=0,cnt=0;

	for (int i = 0; i < right.size(); ++i) {
		if (right[i] == '*') {
			ans += temp;
			cnt++;
			temp = 0;
		}
		else {
			temp += cnt;
		}
	}
	ans += temp;
    cout<<ans<<endl;

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}