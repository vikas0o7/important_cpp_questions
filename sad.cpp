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
	int n,r1,c1,r2,c2 ; char a[60][60];
	cin>>n;
	cin>>r1>>c1; cin>>r2>>c2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) {
			cin>>a[i][j];
			cout<<(a[i][j]-'0')+ 5;
		}
		cout<<endl;
		}
	return 0;
}	