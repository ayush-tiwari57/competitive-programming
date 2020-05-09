/* code of Ayush Tiwari
    codechef- ayush572000
    codeforces- servermonk
*/

#include <bits/stdc++.h>
#define ll long long
#define Mod 1000000007
#define max 998244353
#define pb push_back
#define lb lower_bound
#define ub upper_bound


using namespace std;


ll Euclid(ll p, ll q, ll *x, ll *y); 
int counter(int x){
	return x+1;
}
ll inverse(ll p, ll q) 
{ 
    ll b,c,d,x, y; 
    ll g = Euclid(p, q, &x, &y); 
 
        ll ans = (x%q + q) % q; 
		b=counter(0);
        return ans; 
} 
ll val(ll a,ll b,char sign){
		if(sign=='|'){
		if(a==0 && b==0) return 0;
		else if((a==0&&b==3)||(a==3&&b==3) || (a==3&&b==0)) return (3);
		else if((a==0&&b==2)||(a==2&&b==2)|| (a==2&&b==0)) return (2);
		else return (1);
	}
	else if(sign=='&'){
		if(((a==3 && b==2 )||a==0 || b==0  || (b==3 && a==2))) return (0);
		else if(((a==2&&b==1)||(a==1&&b==2)||(a==2&&b==2))) return (2);
		else if((a==1 && b==1)) return 1;
		else return (3);
	}

	else{
		if(a==b) return 0;
        else if((a==2&&b==0)||(a==0&&b==2)||(a==3&&b==1)||(a==1&&b==3))	return 2;
		else if((a==1&&b==0)||(a==0&&b==1)||(a==2&&b==3)||(a==3&&b==2)) return 1;
        else return 3;
	}
}

ll Euclid(ll p, ll q, ll *x, ll *y) 
{    
    if(p!=0){
	ll x1, y1;
    ll g = Euclid(q%p, p, &x1, &y1); 
    *y = x1; 
    *x = y1 - (q/p) * x1; 
  
    return g;} 
	
	if (p == 0) 
    { 
        *x = 0, *y = 1; 
        return q; 
    } 
    
}

vector<ll> combination(vector<char> p){
	ll size=p.size();
	ll n,m,j,k,i;
	stack<vector<ll>> arr;
	for(k=0;k<size;k++){
		if(p[k]=='#'){
			vector<ll> arr2(4,1);
			arr.push(arr2);
		}
		
		else{
			vector<ll> arr2(4,0);
			vector<ll> z=arr.top();
			arr.pop();


			vector<ll> y=arr.top();
			arr.pop();
			
			//loop
			
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					ll ze1=val(i,j,p[k]);
					if(ze1==0){
					arr2[0]+=(((y[i]%max)*(z[j]%max))%max)%max;
					arr2[0]=(arr2[0]%max)%max;	
					}
					else if(ze1==2){
						arr2[2]+=(((y[i]%max)*(z[j]%max))%max)%max;
						arr2[2]=arr2[2]%max;
					}
					else if(ze1==1){
					arr2[1]+=(((y[i]%max)*(z[j]%max))%max)%max;	
					arr2[1]=arr2[1]%max;
					}
					else{
						arr2[3]+=(((y[i]%max)*(z[j]%max))%max)%max;
						arr2[3]=arr2[3]%max;
					}
				}
			}
			arr.push(arr2);
		}
		
	}
	return arr.top();
}




void solution(){

    // This is the main code
    string s;
    ll i,j,k,n,m,ct=0,t,ans=0;
	 vector<char> p;
  	 cin>>s;ct=0;
  	 ll len=s.length();
  	 stack<char> st;
  	 i=0;j=0;ct=0;
  	 while(i<len){
  	 	     if(s[i]!=')'){
  	 	  	    if(s[i]=='#'){
  	 	  	 	  p.pb('#');
  	 	  	 	  ct++;
				 }
			  else st.push(s[i]);
			 }
			else{
				while(st.top()!='('){
					p.pb(st.top());
					st.pop();
				}
				st.pop();
			}
			i++;
	   }
	while(!st.empty()){
		if(st.top()!='(') p.pb(st.top());
		st.pop();
	}

	vector<ll> z=combination(p);
	 ll tot=1;
	 for(i=1;i<=ct;i++) tot=(((tot%max)*4)%max)%max;
	 tot=tot%max;
	 tot=inverse(tot,max);	
	 tot=tot%max;
	 for(ll x:z){
	 	ll y=x%max;
	 	unsigned ll x1=(((y%max)*(tot%max))%max)%max;
	 	cout<<x1<<" ";
	 }
	 cout<<endl;
}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("/Users/shri/Documents/input.txt","r",stdin);
    // freopen("/Users/shri/Documents/output.txt","w",stdout);
    // #endif
    
    
    ll t;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}