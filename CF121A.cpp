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

ll MAX = 10000000000LL;

void generate_lucky_nums(ll curr_num,vector<ll> &lucky_list)
{
	if(curr_num>MAX)
		return;

	if(curr_num>0)
		lucky_list.push_back(curr_num);

	generate_lucky_nums(curr_num * 10 + 4, lucky_list);
	generate_lucky_nums(curr_num * 10 + 7, lucky_list);
}

vector<ll> find_lucky_list()
{
	vector<long long> lucky_list;

	generate_lucky_nums(0, lucky_list);

	sort(lucky_list.begin(), lucky_list.end());

	return lucky_list;
}

int main()
{

	cldflm();

	vector<long long> lucky_list=find_lucky_list();

	ll l,r; cin>>l>>r;

	ull sum = 0;
	ll temp;

	for(int i=l; i<=r;)
	{

		temp = *(upper_bound(lucky_list.begin(), lucky_list.end(), i-1));
		if(temp>r)
		{
			sum += temp * (r-i+1);
			break;
		}
		sum = sum + temp * (temp-i+1);
		i = temp+1;
	}

	cout<<sum;


	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

	return 0;
}