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
vector<int> v;
void solve(int n){
	queue<int> q;
	q.push(1);
	int mx=1;
	while(!q.empty() && mx<= n){
		int u=q.front(); q.pop();
		v.push_back(u);
		q.push(u*10);
		q.push(u*10+1);
		mx=u;
	}
}
int main()
{
	io;
	int n; cin>>n;
	solve(n);
	vector<int> ans;
	for(int i=v.size()-1;i>=0;i--){
		int num=v[i];
		if(n/num>0){
			int cnt= n/num;
			 n= n-(cnt*num);
			 while(cnt--){
			 	ans.pb(num);
			 }
		}
		if(n==0) break;
	}
	cout<< ans.size()<<endl;
	for(auto it: ans) cout<< it<<" ";
	return 0;
}	