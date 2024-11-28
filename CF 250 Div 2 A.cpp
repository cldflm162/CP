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

bool sortComp (pair<char, int> i,pair<char, int> j) 
{ return (j.second<i.second); }

int main()
{

	cldflm();

	string a,b,c,d; cin>>a>>b>>c>>d;
	int la,lb,lc,ld;

	la = a.length(); la -= 2;
	lb = b.length(); lb -= 2;
	lc = c.length(); lc -= 2;
	ld = d.length(); ld -= 2;

	vector<pair<char, int>> v;

	v.push_back({'A', la});
	v.push_back({'B', lb});
	v.push_back({'C', lc});
	v.push_back({'D', ld});

	int ans1 = 0, ans2 = 0;

	sort (v.begin(), v.end(), sortComp);

	if((v[0].second>=v[1].second*2) && (v[0].second>=v[2].second*2) && (v[0].second>=v[3].second*2))
		ans1++;

	if((v[3].second*2<=v[0].second) && (v[3].second*2<=v[1].second) && (v[3].second*2<=v[2].second))
		ans2++;

	debug(ans1)
	debug(ans2)

	if((ans1==1 || ans2==1) && !(ans1==1 && ans2==1))
	{
		if(ans1==1)
			cout<<v[0].first;
		else
			cout<<v[3].first;
	}
	else
		cout<<'C';

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

	return 0;
}