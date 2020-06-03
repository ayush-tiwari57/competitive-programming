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
    	ll q;
	string str;
	cin>>str;
	cin>>q;
	ll t,i;
	set<ll> s[26];
	for(i=0;i<str.length();i++)
	{
		s[str[i]-'a'].insert(i);
	}
	while(q--)
	{
		ll x,y;
		char c;
		cin>>t;
		if(t==1)
		{
			cin>>x>>c;
			x--;
			s[str[x]-'a'].erase(x);
			s[c-'a'].insert(x);
			str[x]=c;
		}
		else
		{
			ll ans=0;
			cin>>x>>y;
			x--;y--;
			for(i=0;i<26;i++)
			{
			auto it=s[i].lb(x);
			if(it==s[i].end())
				continue;
			if(*it<=y)
				ans++;
			}
			cout<<ans<<"\n";
		}
	}

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll te=1;
    //cin>>t;
    while (te--)
    {
        solution();
    }
    return 0;
}