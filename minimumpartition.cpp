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
int minp(int s[], int n, int s1,int s2){
	if(n<0) return abs(s1-s2);
	int included= minp(s,n-1,s1+s[n],s2);
	int excluded= minp(s,n-1,s1,s2+s[n]);
	return min(included,excluded);
}


int main()
{
	int S[] = { 10, 20, 15, 25};
	int n = sizeof(S) / sizeof(S[0]);
	cout << minp(S, n - 1, 0, 0);
	return 0;
}	