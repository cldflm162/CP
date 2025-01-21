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



bool isRight(int x1,int y1,int x2,int y2,int x3,int y3)
{
	pair<int,int> a = {x1,y1},  b = {x2,y2}, c = {x3,y3};
	vector<long> d(3);
	d[0] = pow(a.first-b.first, 2) + pow(a.second-b.second, 2);
	d[1] = pow(a.first-c.first, 2) + pow(a.second-c.second, 2);
	d[2] = pow(b.first-c.first, 2) + pow(b.second-c.second, 2);
	sort(d.begin(), d.end());

	if(d[2] == d[0] + d[1])
		return true;
	else
		return false;

}

bool isAlmost(int x1,int y1,int x2,int y2,int x3,int y3)
{
	set<pair<int, int>> s= {{x1+1,y1}, {x2,y2}, {x3,y3}};
	if(isRight(x1+1,y1,x2,y2,x3,y3) && s.size()==3){
		return true;
	}
    s= {{x1-1,y1}, {x2,y2}, {x3,y3}};
	if(isRight(x1-1,y1,x2,y2,x3,y3) && s.size()==3){
		return true;
	}
	s= {{x1,y1+1}, {x2,y2}, {x3,y3}};
	if(isRight(x1,y1+1,x2,y2,x3,y3) && s.size()==3){
		return true;
	}
	s= {{x1,y1-1}, {x2,y2}, {x3,y3}};
	if(isRight(x1,y1-1,x2,y2,x3,y3) && s.size()==3){
		return true;
	}
	s= {{x1,y1}, {x2+1,y2}, {x3,y3}};
	if(isRight(x1,y1,x2+1,y2,x3,y3) && s.size()==3){
		return true;
	}
	s= {{x1,y1}, {x2-1,y2}, {x3,y3}};
	if(isRight(x1,y1,x2-1,y2,x3,y3) && s.size()==3){
		return true;
	}
	s= {{x1,y1}, {x2,y2+1}, {x3,y3}};
	if(isRight(x1,y1,x2,y2+1,x3,y3) && s.size()==3){
		return true;
	}
	s= {{x1,y1}, {x2,y2-1}, {x3,y3}};
	if(isRight(x1,y1,x2,y2-1,x3,y3) && s.size()==3){
		return true;
	}
	s= {{x1,y1}, {x2,y2}, {x3+1,y3}};
	if(isRight(x1,y1,x2,y2,x3+1,y3) && s.size()==3){
		return true;
	}
	s= {{x1,y1}, {x2,y2}, {x3-1,y3}};
	if(isRight(x1,y1,x2,y2,x3-1,y3) && s.size()==3){
		return true;
	}
	s= {{x1,y1}, {x2,y2}, {x3,y3+1}};
	if(isRight(x1,y1,x2,y2,x3,y3+1) && s.size()==3){
		return true;
	}
	s= {{x1+1,y1}, {x2,y2}, {x3,y3-1}};
	if(isRight(x1,y1,x2,y2,x3,y3) && s.size()==3){
		return true;
	}
	return false;
}



int main()
{

	cldflm();

	int x1,y1,x2,y2,x3,y3;

	cin>>x1>>y1>>x2>>y2>>x3>>y3;

	if(isRight(x1,y1,x2,y2,x3,y3))
		cout<<"RIGHT";
	else if(isAlmost(x1,y1,x2,y2,x3,y3))
		cout<<"ALMOST";
	else
		cout<<"NEITHER";


	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

	return 0;
}