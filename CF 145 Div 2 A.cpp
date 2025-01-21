#include<bits/stdc++.h>

using namespace std;

#define space ' '
#define newline '\n'
#define FOR(a,b) for(int i=a;i<b;++i)
#define pb push_back

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

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
}	

int main()
{

	cldflm();

	int n; cin>>n;
	vector<pair<int, char>> v,ans;
	char ch;

	for(int i=0; i<n; ++i)
	{
		cin>>ch;
		v.push_back({i+1, ch});
	}

	for(int i=0;i<n;++i)
	{
		if(i%2==0)
		{
			ans.pb(v[i]);
		}
	}

	for(int i=0;i<n;++i)
	{
		if(i%2==1)
		{
			ans.pb(v[i]);
		}
	}

	debug(v);
	debug(ans);

	for(int i=0;i<n;i=i+2)
	{
		if(ans[i].second=='R' && ans[i+1].second=='L')
			swap(ans[i],ans[i+1]);
	}

	for(int i=0;i<n;i=i+2)
	{
		cout<<ans[i].first<<space<<ans[i+1].first<<newline;
	}

	debug(ans);

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

	return 0;
}