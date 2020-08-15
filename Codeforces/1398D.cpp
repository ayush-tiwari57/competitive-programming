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
    int r,g,b;
    cin>>r>>g>>b;
    vector<int> ar(r+1),ag(g+1),ab(b+1);
    forn(i,0,r) cin>>ar[i];
    forn(i,0,g) cin>>ag[i];
    forn(i,0,b) cin>>ab[i];
    sort(all(ar));
    reverse(all(ar));
    sort(all(ag));
    reverse(all(ag));
    sort(all(ab));
    reverse(all(ab));
    int ans1=0,ans2=0,ans3=0;
    int i=0,j=0,k=0;
    for(i=0;i<r;i++){
        if(j<g && k<b){
            if(ag[j]>ab[k]){
                ans1+=ar[i]*ag[j];
                j+=1;
            }
            else{
                ans1+=ar[i]*ab[k];
                k+=1;
            }
        }
        else if(j<g){
            ans1+=ar[i]*ag[j];
            j+=1;
        }
        else if(k<b){
            ans1+=ar[i]*ab[k];
            k+=1;
        }
    }
    // cout<<ans1<<endl;
    i=0,j=0,k=0;
    for(i=0;i<g;i++){
        if(j<r && k<b){
            if(ar[j]>ab[k]){
                ans2+=ag[i]*ar[j];
                j+=1;
            }
            else{
                ans2+=ag[i]*ab[k];
                k+=1;
            }
        }
        else if(j<r){
            ans2+=ag[i]*ar[j];
            j+=1;
        }
        else if(k<b){
            ans2+=ag[i]*ab[k];
            k+=1;
        }
    }

    // cout<<ans2<<endl;
    i=0,j=0,k=0;
    for(i=0;i<b;i++){
        if(j<g && k<r){
            if(ag[j]>ar[k]){
                ans3+=ab[i]*ag[j];
                j+=1;
            }
            else{
                ans3+=ab[i]*ar[k];
                k+=1;
            }
        }
        else if(j<g){
            ans3+=ab[i]*ag[j];
            j+=1;
        }
        else if(k<r){
            ans3+=ab[i]*ar[k];
            k+=1;
        }
    }

    // cout<<max(ans1,max(ans2,ans3));
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}