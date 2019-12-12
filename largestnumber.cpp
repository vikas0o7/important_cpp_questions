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

bool cmp(string s, string t){
	string c= s.append(t);
	string d= t.append(s);
	return (c>d);
}

int main()
{
	io;
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<string> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end(),cmp);
		for(int i=0;i<a.size();i++){
			cout<<a[i];
		}	
		cout<<endl;
	}
	return 0;
}	