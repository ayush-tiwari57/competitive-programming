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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string t="";
    t+=s[0];
    string temp=t;
    while(temp.size()<k){
            temp+=temp;
        }
    while(temp.size()>k) temp.pop_back();
    string mn=temp;
    forn(i,1,n){
        t+=s[i];
        temp=t;
        while(temp.size()<k){
            temp+=temp;
        }
        while(temp.size()>k) temp.pop_back();
        mn=min(mn,temp);
    }
    cout<<mn<<endl;
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