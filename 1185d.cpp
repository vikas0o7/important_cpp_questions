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
typedef long long int lint;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;
int main()
{
	io;
	int n; cin>>n;
	vector<pair<lint,lint> > a;
	vector<lint> d(n);
	map<lint, vector<lint> > mp;
	for(int i=0;i<n;i++) {
		int x; cin>>x;
		a.pb({x, i});
	}
	sort(a.begin(), a.end());
	for(int i=1;i<n;i++){
		d[i]= a[i].first-a[i-1].first;
		//cout<<d[i];
			mp[d[i]].pb(a[i].second+1);
	}

	//cout<<mp.size();
	//for(auto i: mp) cout<< i.first<<endl;
	vector<pair<int,int> > ans;
	int flag=INT_MAX;
	if(mp.size()==1) {cout<<1; return 0;}
	else if(mp.size()>2){ cout<< -1; return 0;}
	
	else{
		//cout<<"ghgf";
		int diff= a[1].first-a[0].first;
		if(mp[diff].size()==1) {cout<<1; return 0;}
		for(auto it= mp.begin();it!=mp.end();it++){
			if(it->second.size()==1) {cout<< it->second[0];
				
			 flag=1; break;}
			else if(it->second.size()==2){
				flag=2;
				ans.pb({it->first, it->second[0]});
			}
		}
	}
	//cout<< mp.size()<<endl;
	//for(auto i: mp) cout<< i.first<<endl;
	if(flag==2){
		//cout<<"jij";
		sort(ans.begin(),ans.end());
     cout<< ans[0].second;
	}
	return 0;
}	