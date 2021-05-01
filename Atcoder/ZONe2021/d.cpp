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
    string s;
    cin>>s;
    deque<char> d;
    int flag=0;
    string ans="";
    int i=0;
    while(i<s.size() && s[i]=='R') i++;
    if(i<s.size()) d.push_back(s[i]);
    i++;
    // forn(j,0,d.size()) cout<<d[i];
    while(i<s.size()){
        if(s[i]=='R') flag=1-flag;
        else{
            if(!flag){
                if(!d.empty() && d.back()==s[i]) d.pop_back();
                else
                d.push_back(s[i]);
            }
            else{
                if(!d.empty() && d.front()==s[i]) d.pop_front();
                else d.push_front(s[i]);
            }
        }
        i++;
    }
    if(flag){
        int n=d.size();
        rforn(j,n-1,0) ans+=d[j];
    }
    else{
        int n=d.size();
        forn(j,0,n) ans+=d[j];
    }
    cout<<ans<<endl;
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