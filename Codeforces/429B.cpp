    #include<bits/stdc++.h>
    #define M 1010][1010
    using namespace std;
    int n,m;
    long long f1[M],f2[M],g1[M],g2[M],a[M],ans;
    int main(){
    	cin>>n>>m;
    	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)scanf("%lld",&a[i][j]);
    	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)f1[i][j]=max(f1[i-1][j],f1[i][j-1])+a[i][j];//0
    	for(int i=1;i<=n;i++)for(int j=m;j>=1;j--)g1[i][j]=max(g1[i-1][j],g1[i][j+1])+a[i][j];//1
    	for(int i=n;i>=1;i--)for(int j=m;j>=1;j--)f2[i][j]=max(f2[i+1][j],f2[i][j+1])+a[i][j];//3
    	for(int i=n;i>=1;i--)for(int j=1;j<=m;j++)g2[i][j]=max(g2[i+1][j],g2[i][j-1])+a[i][j];//2
    	for(int i=2;i<n;i++)for(int j=2;j<m;j++)
    		ans=max(ans,max(f1[i-1][j]+f2[i+1][j]+g2[i][j-1]+g1[i][j+1],
    		f1[i][j-1]+f2[i][j+1]+g2[i+1][j]+g1[i-1][j]));
    	cout<<ans;
    	return 0;
    }