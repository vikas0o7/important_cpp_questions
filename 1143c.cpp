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
int n, a[100005],c[100005],s[100005];
int main()
{
	io;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>> a[i]>> c[i];
		s[i]=c[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]>0)s[a[i]]&=c[i];
	}
	int can=0;
	for(int i=1;i<n+1;i++){
		if(s[i]){
			cout<<i<< " ";
			can=1;
		}
	}
	if(can==0) cout<<-1;
	return 0;
}	