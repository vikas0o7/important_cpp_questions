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
	int a,b,c;
	cin>>a>>b>>c;
	string ans;
	map<int,int> cnt;
	cnt[a]++; cnt[b]++; cnt[c]++;
	if(cnt[1] || cnt[2]>1 || (cnt[4]==2 && cnt[2]==1) || cnt[3]==3) ans="YES";
	else ans="NO";
	cout<<ans;
	return 0;
}	