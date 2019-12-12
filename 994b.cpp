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
const int N = 100100;
 int n,k,i;
 long long mx,ans[N];
 pair<pair<int,int>,int>p[N];
 priority_queue<int>q;
int main()
{
	io;
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>> p[i].first.first;
	for(int i=0;i<n;i++){
		cin>> p[i].first.second;
		p[i].second=i;
	}	
	sort(p,p+n);
	for(int i=0;i<n;i++){
		mx+=p[i].first.second;
		ans[p[i].second]=mx;
		q.push(-1* p[i].first.second);
		if(q.size()>k){
			mx+=q.top(); q.pop();
		}
	}
	for(int i=0;i<n;i++){
		cout<< ans[i]<<" ";
	}
	return 0;
}	