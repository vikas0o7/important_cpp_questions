#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
typedef long long int ll;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;
int main()
{
	io;
	int n; cin>>n;
	string s;
	map<int,int> st;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>s; int r=0,q=0;
		for(auto j: s){
			if(j=='(') q++;
			else q--;
			r= min(r,q);
		}
		if(r<0 and r< q) continue;  // reject string which require parenthesis on both sides;
		if(st[-q]) ans++, st[-q]--;
		else st[q]++;
	}
	cout<<ans;
	return 0;
}	


// 10

// )))

// ())))

// (((

// ((()

// ()(

// )((())

// (((((

// )())(

// )()((()

// ((((()()(
