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
unordered_map<string, int> cnt;
bool cmp(string &a, string &b){
	return cnt[a]>cnt[b];
}
int main()
{
	io;
	int n; cin>>n;
	vector<string> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		cnt[v[i]]= distance(v[i].begin(), unique(v[i].begin(),v[i].end()));
	}
	int ans=0;
	unordered_set<char> st;
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++){
		//cout<<ans<<endl;
		string s= v[i];
		bool flag=true;
		unordered_set<char> str; str.clear();
		for(int it=0;it<s.length();it++){
			if(st.find(s[it])!=st.end()){
				flag=false;
				//cout<< s[it]<<endl;
			}
			str.insert(s[it]);

		}
		if(flag==true) ans++;
		for(auto k: str) st.insert(k);

	}
	cout<< ans<<endl;
	return 0;
}	