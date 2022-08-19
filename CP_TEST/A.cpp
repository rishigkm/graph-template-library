#include <bits/stdc++.h>
#include "../source/graph_library.h"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define int long long int
#define N 1e16 + 5
#define all(x) (x).begin(), (x).end()
#define rep(i,x,y) for(int i=x; i<y; i++)    
#define fill(a,b) memset(a, b, sizeof(a))
#define setbits(x) __builtin_popcountll(x)
#define vi vector<int>
#define pi 3.14159265358979323846264338327950
#define print1(arr) for(auto x : arr) cout << x << " "; cout << "\n";
#define print2(arr) for(auto row : arr) {for(auto cell : row) cout << cell << " "; cout << "\n";}
const int mod = 1000000007;
using namespace std;
const int MAX = 1000005;
int binpow(int a,int b){
	int res=1;
	while(b>0)
	{
		if(b&1)res=res*a;
		a=a*a;b/=2;
	}
	return res;
}

void test_case() {
	int n,m;
	cin >> n >> m;
	vector<array<int,2>> edges(m);
	for(int i=0;i<m;i++){
		int x,y;
		cin >> x >> y;
		edges[i]={x,y};
	}
	disjoint_set_union DSU(n+1);
	int cnt=0;
	for(int i=0;i<m;i++){
		// if not same then do union
		int x=edges[i][0], y=edges[i][1];
		if(!DSU.is_same(x,y)){
			++cnt;
			DSU.do_union(x,y);
		}
	}
	cout << cnt << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 0;
    cin >> t;
    while(t--) {
    	test_case();
    }
    
    return 0;
}





/*
//fixed<<setprecision(y)<<x
//lower_bound -> returns first element>=key
//upper_bound -> returns first element>key
//lookout for negative modulo
//find_by_order(k)-> returns iterator to kth largest element
//order_of_key(k)->returns no. of elements<k
//choose wisely b/w dfs-to iterate every node and bfs-shortest path
*/