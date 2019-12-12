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
int c[99],r[7];
int main()
{
	io;
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	c[4]=1; c[8]=2; c[15]=3; c[16]=4; c[23]=5;c[42]=6;
	for(int i=0;i<n;i++){
		int y=c[a[i]];
		if(y==1) r[1]++;
		if(r[y-1]>0) r[y-1]--,r[y]++;
	}
	cout<< n- 6* r[6];
	return 0;
}	