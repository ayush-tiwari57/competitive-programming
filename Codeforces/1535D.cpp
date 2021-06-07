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
#define maxn 600004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<int> cnt(maxn,1);

string s;
int update(int i){
    int x=0,y=0;
    if(s[i]!='0') x=cnt[2*i+1];
    if(s[i]!='1') y=cnt[2*i+2];
    return cnt[i]=x+y;
}

void solution(){

    // This is the main code
    int k;
    cin>>k;
    cin>>s;
    int n=1<<k;
    reverse(all(s));
    rforn(i,n-2,0) update(i);
    int q;
    cin>>q;
    while(q--){
        int ind;
        char ch;
        cin>>ind>>ch;
        ind=n-ind-1;
        s[ind]=ch;
        while(ind){
            update(ind);
            ind=(ind-1)/2;
        }
        cout<<update(ind)<<endl;
    }
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