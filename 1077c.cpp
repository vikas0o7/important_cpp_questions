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
int n, a[200005],b[200005],sum,maxi;
vector<int> ans;
int main()
{
	io;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
		sum+=a[i];
	}
	sort(b,b+n);
	for(int i=0;i<n;i++){
		maxi=b[n-1];
		if(a[i]==maxi) maxi=b[n-2];
		if(maxi==sum-a[i]-maxi) ans.pb(i+1);
	}
	cout<< ans.size()<<endl;
	for(auto i: ans) cout<< i<<" ";
	return 0;
}	