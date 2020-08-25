#include <bits/stdc++.h>

using namespace std;

const int N = int(3e5) + 99;
const long long INF64 = (long long)(1e18) + 100;

int t;
int n;
int a[N];
int b[N];
long long dp[3][N];

long long calc(int add, int pos){
	long long &res = dp[add][pos];
	if(res != -1) return res;

	res = INF64;
	if(pos == n) return res = 0;
	for(long long x = 0; x <= 2; ++x)
		if(pos == 0 || a[pos] + x != a[pos - 1] + add)
			res = min(res, calc(x, pos + 1) + x * b[pos]);
		
	return res;
}

int main() {	
	scanf("%d", &t);
	for(int tc = 0; tc < t; ++tc){
		scanf("%d", &n);
		for(int i = 0; i < n; ++i){
			scanf("%d", a + i);
			scanf("%d", b + i);
		}

		for(int i = 0; i <= n; ++i) 
			dp[0][i] = dp[1][i] = dp[2][i] = -1;				
		printf("%lld\n", calc(0, 0));
	}
	return 0;
}   