/*
************************************
* Author : SHARAN SWAROOP          *
* https://linktr.ee/sharan_swaroop *
************************************
*/
#include<bits/stdc++.h>
#define endl '\n'
#define int int64_t
#define debug(x) cerr << #x << " : " << x << endl ;
using namespace std ;

void solve() {
    int n ;
    cin >> n ; 
    vector<int> a(n , 0) ; 
    iota(a.begin() , a.end() , 1ll) ;
    reverse(a.begin() , a.end()) ;
    if (n > 2 && (n & 1)) {
        reverse(a.begin() , a.begin() + ((n + 1) / 2)) ;
    }
    if (n == 3) {
        cout << -1 << endl ;
    } else {
        for (int &i : a)    cout << i << " " ;
        cout << endl ;
    }
}

int32_t main() {
   cin.tie(NULL) ;
   std::ios::sync_with_stdio(false) ;
   
   #ifndef ONLINE_JUDGE
   freopen("INPUT.txt","r",stdin) ;
   freopen("OUTPUT.txt","w",stdout) ;
   #endif
   
   int t = 1 ;
   cin >> t ;/*comment this line if no test cases*/
   for(int i = 1 ; i <= t ; i++)   solve() ; 
    
   double runtime = clock() * 1.0 /CLOCKS_PER_SEC ;
   debug(runtime) ; 
   
   return 0 ;
}