#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
    int q,b,l=1,r=0;
    char c;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>c>>b;
        if(c=='L') a[b]=--l;
        else if(c=='R') a[b]=++r;
        else cout<<min(a[b]-l,r-a[b])<<endl;
    }
}