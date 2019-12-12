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
	int n,m;
	cin>>n>>m;
	set<pair<int,int> > s;
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			s.insert(make_pair(i,j));
		}
	}
	while(!s.empty()){
		if(cnt%2==0){
			pair<int,int> curr= *s.begin();
			cout<< curr.first<<" "<<curr.second<<'\n';
			s.erase(s.begin());
		}
		else{
			pair<int,int> curr= *--s.end();
			cout<< curr.first<<" "<<curr.second<<'\n';
			s.erase(--s.end());
		}
		cnt++;
	}
	return 0;
}	