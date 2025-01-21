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

	map<string, int> v = {{"C", 0}, {"C#", 1}, {"D", 2}, {"D#", 3}, {"E", 4}, {"F",5}, {"F#",6}, {"G",7}, {"G#",8}, {"A",9}, {"B",10}, {"H",11}};

	string x,y,z; cin>>x>>y>>z;
	int xy,yz;

	// 1
	xy = v[y]- v[x] ;
	yz = v[z] - v[y];

	if(xy<0) xy += 12;
	if(yz<0) yz += 12;

	if(xy==4 && yz==3)
	{
		cout<<"major";
		return 0;	
	} 
	if(xy==3 && yz==4) 
	{
		cout<<"minor";
		return 0;
	}

	// 2
	xy = v[z]- v[x] ;
	yz = v[y] - v[z];

	if(xy<0) xy += 12;
	if(yz<0) yz += 12;


	if(xy==4 && yz==3)
	{
		cout<<"major";
		return 0;	
	} 
	if(xy==3 && yz==4) 
	{
		cout<<"minor";
		return 0;
	}

	// 3
	xy = v[x]- v[y] ;
	yz = v[z] - v[x];


	if(xy<0) xy += 12;
	if(yz<0) yz += 12;


	if(xy==4 && yz==3)
	{
		cout<<"major";
		return 0;	
	} 
	if(xy==3 && yz==4) 
	{
		cout<<"minor";
		return 0;
	}
  
	// 4
	xy = v[z]- v[y] ;
	yz = v[x] - v[z];


	if(xy<0) xy += 12;
	if(yz<0) yz += 12;


	if(xy==4 && yz==3)
	{
		cout<<"major";
		return 0;	
	} 
	if(xy==3 && yz==4) 
	{
		cout<<"minor";
		return 0;
	}

	// 5
	xy = v[x]- v[z] ;
	yz = v[y] - v[x];


	if(xy<0) xy += 12;
	if(yz<0) yz += 12;


	if(xy==4 && yz==3)
	{
		cout<<"major";
		return 0;	
	} 
	if(xy==3 && yz==4) 
	{
		cout<<"minor";
		return 0;
	}

	// 6
	xy = v[y]- v[z] ;
	yz = v[x] - v[y];


	if(xy<0) xy += 12;
	if(yz<0) yz += 12;


	if(xy==4 && yz==3)
	{
		cout<<"major";
		return 0;	
	} 
	if(xy==3 && yz==4) 
	{
		cout<<"minor";
		return 0;
	}

	cout<<"strange";

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

	return 0;
}