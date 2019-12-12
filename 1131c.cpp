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
	int n;cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int flag=1;
	sort(a.rbegin(),a.rend());
	deque<int> dq; dq.push_back(a[0]);
	for(int i=1;i<n;i++) {
		if(flag==1)dq.pb(a[i]);
		else if(flag==-1)dq.push_front(a[i]);
		flag=flag*(-1);
	}
	vector<int> v;
	while(!dq.empty()){
 	int  x= dq.front();
 	v.pb(x); dq.pop_front();
	}
	for(int i=0;i<n;i++){
		cout<< v[i]<<" ";
	}
	return 0;
}	