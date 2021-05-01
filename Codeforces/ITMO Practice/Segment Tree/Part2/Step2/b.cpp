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
#define maxn 100004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

ll sumarr[4*maxn],operation[4*maxn];

void build(int ind,int ss,int se){
    if(ss==se) {
        sumarr[ind]=1;
        return;
    }
    int mid=(ss+se)/2;
    build(2*ind,ss,mid);
    build(2*ind+1,mid+1,se);
    sumarr[ind]=sumarr[2*ind+1]+sumarr[2*ind];
}

void multiply(int ind,int ss,int se,int qs,int qe,ll ele){
    if(operation[ind]!=1){
        ll dx=operation[ind];
        if(ss!=se){
            operation[2*ind]=(operation[2*ind]*dx)%Mod;
            operation[2*ind+1]=(operation[2*ind+1]*dx)%Mod;
        }
        operation[ind]=1;
        sumarr[ind]=(sumarr[ind]*dx)%Mod;
    }
    if(qs>se || qe<ss) return;
    if(qs<=ss && qe>=se) {
        sumarr[ind]=(sumarr[ind]*ele)%Mod;
        if(ss!=se){
            operation[2*ind]=(operation[2*ind]*ele)%Mod;
            operation[2*ind+1]=(operation[2*ind+1]*ele)%Mod;
        } 
        return; 
    }
    int mid=(ss+se)/2;
    multiply(2*ind,ss,mid,qs,qe,ele);
    multiply(2*ind+1,mid+1,se,qs,qe,ele);
    sumarr[ind]=(sumarr[2*ind]+sumarr[2*ind+1])%Mod;
}

ll sum(int ind,int ss,int se,int qs,int qe){
    if(operation[ind]!=1){
        ll dx=operation[ind];
        if(ss!=se){
            operation[2*ind]=(operation[2*ind]*dx)%Mod;
            operation[2*ind+1]=(operation[2*ind+1]*dx)%Mod;
        }
        operation[ind]=1;
        sumarr[ind]=(sumarr[ind]*dx)%Mod;
    }
    if(qs>se || qe<ss) return 0;
    if(qs<=ss && qe>=se) {
        if(operation[ind]!=1){
            ll dx=operation[ind];
            if(ss!=se){
                operation[2*ind]=(operation[2*ind]*dx)%Mod;
                operation[2*ind+1]=(operation[2*ind+1]*dx)%Mod;
            }
            operation[ind]=1;
            sumarr[ind]=(sumarr[ind]*dx)%Mod;
        }
        return sumarr[ind]%Mod;
    }
    int mid=(ss+se)/2;
    ll x=sum(2*ind,ss,mid,qs,qe);
    ll y=sum(2*ind+1,mid+1,se,qs,qe);
    return (x+y)%Mod;
}
void solution(){

    // This is the main code
    int n,m,l,r,t,ele;
    cin>>n>>m;
    forn(i,0,4*maxn){
        operation[i]=1;
        // sumarr[i]=1;
    }
    build(1,1,n);
    forn(i,0,m){
        cin>>t;
        if(t==1){
            cin>>l>>r>>ele;
            l++;
            multiply(1,1,n,l,r,ele);
        }   
        else{
            cin>>l>>r;
            l++;
            cout<<sum(1,1,n,l,r)<<endl;
        }             
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}