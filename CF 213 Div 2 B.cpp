#include<bits/stdc++.h>

using namespace std;

#define space ' '
#define newline '\n'
#define FOR(a,b) for(int i=a;i<b;++i)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#ifndef ONLINE_JUDGE
#define debug(x); cerr << #x <<" -> "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

const int MOD = 1000000007;

void cldflm()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	freopen("/Users/nikhil/Desktop/CP/ip_op_err/input.txt", "r", stdin);
	freopen("/Users/nikhil/Desktop/CP/ip_op_err/output.txt", "w" , stdout);
	freopen("/Users/nikhil/Desktop/CP/ip_op_err/error.txt", "w", stderr);
#endif
}	

int main()
{

	cldflm();

	int n; cin>>n;
	vector<ll> v(n);

	if(n == 1 || n == 2)
	{
		cout<<n;
		return 0;
	}

	int maxAns = 2;
	int ans = 2;

	FOR(0,n) cin>>v[i];

	for(int i=2; i<n; ++i)
	{
		if(v[i] == v[i-1] + v[i-2])
			ans++;
		else
		{
			maxAns = max(maxAns, ans);
			ans = 2;
		}
	}

	maxAns = max(maxAns, ans);

	cout<<maxAns;

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

	return 0;
}