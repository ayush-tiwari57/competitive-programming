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
#define cforn(x1) for(char x1='a';x1<='z';x1++)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;
bool comp(string it,string jt){ 
		if (it.size() == jt.size()) return it < jt;
		return it.size() < jt.size();
	
}
vector<string> dp;
void func() {
	cforn(x1){
        string s;
        s+=x1;
        dp.pb(s);
        cforn(x2){
            dp.pb(s+x2);
            cforn(x3){
                dp.pb(s+x2+x3);
            }
        }
    }
}

void solution() {
	int n; 
	string s; 
    cin >> n;
    cin >> s;

	vector<string> arr;
	map<string, bool> mpi;
	forn(i,0 ,n-1)
	{
		string t;
		t.pb(s[i]);
		t.pb(s[i + 1]);

		if (!mpi[t])
			arr.pb(t);
		mpi[t] = true;
	}
	forn(i ,0,n) {
		string t;
		t.pb(s[i]);
		if (!mpi[t])
			arr.pb(t);
		mpi[t] = true;
	}



	forn(i,0,n-2) {
		string t;
		t.pb(s[i]);
		t.pb(s[i + 1]);
		t.pb(s[i + 2]);
		if (!mpi[t])
			arr.pb(t);
		mpi[t] = true;
	}
	sort(all(arr),comp );

	int i;  
	for (i = 0; i < dp.size() and i < arr.size(); ++i) {
		if (dp[i] != arr[i]) break;
	}

	cout << dp[i] << endl;
	return;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    func();
    sort(all(dp),comp);
    int test=1;
    cin>>test;
    while (test--)
    {
        solution();
    }
    return 0;
}