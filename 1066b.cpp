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
	int n,r; cin>>n>>r;
	vector<int> a(n),v;
	//v.pb(-1);
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	int cnt=0,x=-1;
	for(int i=0;i<n;i++){
		cnt++; int t=0;
		for(int j=-r+1;j<r && i+j<n;j++){
			if(i+j<0) continue;
			if(a[i+j]){
				x=i+j+r-1; t=1;
			}
		}
		if(t==0){cout<<-1;return 0;}
		//error(i,x,cnt)
		i=x;

	}
	cout<<cnt;
	return 0;
}	