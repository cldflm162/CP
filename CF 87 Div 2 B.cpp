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

int n,m;
char grid[11][11];

bool is_eatable(int a, int b)
{
	if(a>=0 && a<n && b>=0 && b<m)
		{
			if(grid[a][b]=='P')
					return true;
		}
	return false;
}



int main()
{

	cldflm();

	cin>>n>>m;
	int ans = 0;

	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
		{
			char temp; cin>>temp;
			grid[i][j] = temp;
		}

	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
		{
			if(grid[i][j]=='W')
			{
				if(is_eatable(i-1,j) || is_eatable(i+1,j) || is_eatable(i,j-1) || is_eatable(i,j+1))
					ans++;
			}
		}

	cout<<ans;

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

	return 0;
}