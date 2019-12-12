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
int cnt=0;
int main()
{
	io;
	string s;
	cin>>s;
	int n= s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='1') cnt++;
	}
	int ans=0;
	if(cnt>1){
		ans=(n+1)/2;
	}
	else if(cnt==1){
		if(n%2==1) ans= n/2;
		else ans=(n+1)/2;
	}
	cout<<ans;
	return 0;
}	