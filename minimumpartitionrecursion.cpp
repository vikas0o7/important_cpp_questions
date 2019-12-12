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
int minp(vector<int> s, int n, int s1,int s2){
	if(n<0) return abs(s1-s2);
	int inc= minp(s, n-1, s1+s[n],s2);
	int exc=minp(s,n-1, s1,s2+s[n]);
	return min(inc,exc);
}

int main()
{
	int n; cin>>n;
	vector<int> S(n);
	for(int i=0;i<n;i++) cin>>S[i];
	cout << minp(S, n - 1, 0, 0);
	return 0;
}	