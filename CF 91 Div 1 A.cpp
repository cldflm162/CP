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

// ull next(ll n)
// {
// 	ll nn = n;
// 	bool flag = false;
// 	while(nn)
// 	{
// 		int rem = nn%10;
// 		nn /= 10;

// 		if(rem!=7 || rem!=4)
// 		{
// 			flag = true;
// 			break;
// 		}
// 	}

// 	if(!flag)
// 		return n;

// 	string s = to_string(n);
// 	int first = int(s[0])-48;

// 	if(first>4 && first<7)
// 		first = 7;
// 	else
// 		first = 4;

// 	if(first==7)
// 		s[0]='7';
// 	else 
// 		s[0]='4';

// 	FOR(1,s.length())
// 		s[i]='4';

// 	return stol(s, nullptr, 10);
// }

ull next(ll n)
{
	if(n==8 || n==9)
		{	debug(n);
			return 44;}

	string s = to_string(n);
	string ans(s.length(), '-');
	int flag = 1;

	FOR(0,s.length())
	{	
		if(flag == 1)
		{
			if(s[i]=='4' || s[i]=='7')
					ans[i]=s[i];
			else
				flag = 0;
		}
		
		if(flag==0)
		{
			int temp = int(s[i])-48;

			if(temp>4 && temp <=7)
				ans[i] = '7';
			else6
				ans[i] = '4';

			flag = 2;
		}

		if(flag==2)
			ans[i] = '4';

	}

	debug(ans);
	return stoull(ans);
}

int main()
{

	cldflm();

	ll l,r; cin>>l>>r;
	ull sum = 0;

	FOR(l,r+1)
		sum += next(i);

	cout<<sum;

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

	return 0;
}