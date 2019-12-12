#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
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
map<int,int> mp;
int main()
{
	io;
	int n,m; cin>>n>>m;
	int a[m][3];
	for(int i=0;i<m;i++){
		cin >>a[i][0]>>a[i][1]>>a[i][2];
	}
	for(int i=0;i<m;i++){
		
		set<int> s;
		bool one=false,two=false,three=false;
		for(int j=0;j<3;j++){
			if(mp.find(a[i][j])!=mp.end()){
				if(mp[a[i][j]]==1) one=true;
				else if(mp[a[i][j]]==2) two=true;
				else three=true;
			}
		}
		for(int j=0;j<3;j++){
			if(mp.find(a[i][j])==mp.end()){
			if(one==false) {mp[a[i][j]]=1; one=true;}
				else if(two==false) {mp[a[i][j]]=2;two=true;}
				else {mp[a[i][j]]=3; three=true;}
		}	}
				
			
		}
	
	//for(auto i: mp) cout<< i.second<<" ";
	for(int i=1;i<=n;i++){
		cout<< mp[i]<< " ";
	}
	return 0;
}	