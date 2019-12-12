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
bool cmp(pair<pair<string,int>,int> &x,pair<pair<string,int>,int> &y){
	if(x.first.first==y.first.first) return (x.first.second>y.first.second);
	return x.first.first< y.first.first;

}
int main()
{
	io;
	int t ; cin>>t;
	while(t--){
		int n; cin>>n;
		map<pair<string,int> , int> m;
		vector<pair<string,int> > a;
		string s; int num;
		for(int i=0;i<n;i++){
			cin>>s>>num;
			a.pb({s,num});
			//s+=" "+to_string(num);
			m[{s,num}]++;
		}
		vector<pair<pair<string,int> , int> >ans;
		for(auto i: m) ans.push_back(mp(mp(i.first.first,i.first.second),i.second));
		sort(ans.begin(),ans.end(),cmp);
		for(int i=0;i<ans.size();i++){
			cout<< ans[i].first.first<<" "<<ans[i].first.second<<" "<< ans[i].second<<endl;
		}	
	}
	return 0;
}	