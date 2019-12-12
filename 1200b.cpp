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
int n,m,k;
int a[101];
int main()
{
	io;
	int t; cin>>t;
	while(t--){
	cin>>n>>m>>k;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		if(a[i+1]<=a[i]){
			m= m+a[i]-a[i+1];
		}
		else if(a[i+1]>a[i]){
			if(a[i+1]-a[i]-k-m>0){
				cout<< "NO"<<endl; goto vikas;
			}
			else {
				m= m-(a[i+1]-a[i]-k);
			}
		}
	}	
	cout<< "YES"<<endl;
	vikas: continue;
}
	return 0;
}	