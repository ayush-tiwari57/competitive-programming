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
    int cnt0=0,cnt1=0,a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int n=s.size();
    forn(i,0,n){
        if(s[i]=='0') cnt0++;
        if(s[i]=='1') cnt1++;
    }
    if(cnt0>a || cnt1>b){
        cout<<-1<<endl;;
        return;
    }
    a-=cnt0;
    b-=cnt1;
    forn(i,0,n/2){
        if(s[i]=='?' && s[n-i-1]=='?') continue;
        if(s[i]=='?' || s[n-i-1]=='?'){
            if(s[i]=='?'){
                if(s[n-i-1]=='1'){
                    if(b==0){
                        cout<<-1<<endl;
                        return;
                    }
                    b--;
                    s[i]='1';
                }
                else{
                    if(a==0){
                        cout<<-1<<endl;
                        return;
                    }
                    a--;
                    s[i]='0';
                }
            }
            else{
                if(s[i]=='1'){
                    if(b==0){
                        cout<<-1<<endl;
                        return;
                    }
                    b--;
                    s[n-i-1]='1';
                }
                else{
                    if(a==0){
                        cout<<-1<<endl;
                        return;
                    }
                    a--;
                    s[n-i-1]='0';
                }
            }
        }
        else{
            if(s[i]!=s[n-i-1]){
                cout<<-1<<endl;
                return;
            }
        }
        // cout<<i<<endl;
    }
    // cout<<s;
    forn(i,0,n){
        // cout<<s<<endl;
        if(s[i]=='?'){
            if(i==n/2 && n%2==1){
                if(a>0){
                    a--;
                    s[i]='0';
                }
                else if(b>0){
                    b--;
                    s[i]='1';
                }
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
            else{
                if(a>1){
                    a-=2;
                    s[i]='0';
                    s[n-i-1]='0';
                }
                else if(b>1){
                    b-=2;
                    s[i]='1';
                    s[n-i-1]='1';
                }
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    cout<<s<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
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