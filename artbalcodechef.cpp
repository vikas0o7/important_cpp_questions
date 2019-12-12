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
void factor(int a,vector<int> &v){
	for(int i=1;i<=sqrt(a);i++){
		if(a%i==0){
			if(a/i==i) v.pb(i);
			else {v.pb(i); v.pb(a/i);}
		}
	}
	sort(v.begin(),v.end());
}


int main()
{
	io;
	int t; cin>>t;
	while(t--){
		string s; cin>>s; int ans=INT_MAX;
		int n=s.length(); vector<int> v;
		factor(n,v);
		map<char,int>m;
		for(int i=0;i<n;i++){
			m[s[i]]++;
		}
		for(int i=0;i<v.size();i++){
			int num=v[i]; int low=0,high=0;
			//cout<<"num"<<" "<<num<<endl;
			if(num*26<n) continue;
			for(auto i: m){
				if((i.second)<num) low=low+num-(i.second);
				else if((i.second)>num) high+=(i.second)-num;
				//error(low,high)
			}
			//cout<<high<<" "<<low<<endl;
			if(high>=low) ans=min(ans,high);
			else if(high==0) ans=min(ans,low/num);
			//cout<<num<<" "<<ans<<endl;
		}
		cout<<ans<<endl;
		//for(auto it:m) cout<<it.first<<" "<<it.second<<" "; cout<<endl;
	}
	return 0;
}	