    #include<bits/stdc++.h>
    using namespace std ;
    #define int long long int
    const int mod = (int)(1e9) + 7 ;
     
    unordered_map<int,int> mem ;
     
    int rec(int y, int x){
        if( y == 1 ) return abs(x - y) ;
        if( mem.find(y) != mem.end() ) return mem[y] ;
        if( y % 2 == 1 ){
            return mem[y] = min({abs(y-x), rec((y+1)/2, x) + 2, rec((y-1)/2, x) + 2}) ;
        }
        else{
            return mem[y] = min(abs(y-x), rec(y/2, x) + 1) ;
        }
    }
     
     
    void TESTCASE(){
        int X, Y ;
        cin >> X >> Y ;
        cout << rec(Y, X) << endl ;
        return;
    }
     
    signed main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int TESTS = 1; //cin >> TESTS ;
        for(int TEST = 1; TEST <= TESTS; TEST++){
            TESTCASE();
        }
        return 0 ;
    }