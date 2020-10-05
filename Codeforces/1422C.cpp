#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define pie (3.141592653589)
using namespace std;
    
int multiply(int a, int b)
{
    return (a* b) % mod;
}
    
void add(int &a, int b)
{
    a += b;
    if(a >= mod)
    {
        a -= mod;
    }
}
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed;
    cout.precision(10);
    
    string s;
    cin >> s;
    int n =  s.length();
    vector<int> left(n+1);
    left[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        left[i] = multiply(left[i - 1], 10);
    }
    vector<int> right(n + 1);
    for(int i = 1; i <= n; i++)
    {
        right[i] = multiply(i, left[i - 1]);
    }

    for(int i = 1; i <= n; i++)
    {
        add(right[i], right[i - 1]);
    }
    int sol = 0;
    for(int i = 0; i < n; i++)
    {
        int d = s[i] - '0';
        add(sol, multiply(right[n - i - 1], d));
        int prefix = i * (i + 1) / 2;
        add(sol, multiply(d, multiply(prefix, left[n - i - 1])));
    }
    cout << sol;
    
    return 0;
}