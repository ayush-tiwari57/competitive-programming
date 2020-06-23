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
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int value[maxn];
int parent[maxn];

void dfs(int n){
    queue<int> q;
    q.push(1);
    parent[1]=0;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        if(cur==0){
            stack<int> s;
            while(parent[cur]){
                s.push(value[cur]);
                cur=parent[cur];
            }
            s.push(1);
            while(!s.empty()){
                cout<<s.top();
                s.pop();
            }
            cout<<endl;
            break;
        }
        int temp=(cur*10)%n;
        if(parent[temp]==-1){
            parent[temp]=cur;
            q.push(temp);
            value[temp]=0;
        }
        temp=(cur*10+1)%n;
        if(parent[temp]==-1){
            parent[temp]=cur;
            q.push(temp);
            value[temp]=1;
        }
    }
}

void solution(){

    // This is the main code
    int n;
    cin>>n;
    memset(value,-1,sizeof(value));
    memset(parent,-1,sizeof(parent));
    dfs(n);

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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