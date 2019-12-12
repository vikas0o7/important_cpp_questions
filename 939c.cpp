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
ll n,s,f;
const int maxn= 200000;
int a[maxn], pre[maxn];
int main()
{
	io;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		a[i+n]=a[i];
	}	
	pre[0]=a[0];
	n*=2;
	for(int i=1;i<n;i++){
		pre[i]=a[i]+pre[i-1];
	}
	ll sum=0, x=0, ans=0;
	cin>>s>>f;
	ll k= f-s;
	for(int i=1;i<n-k+1;i++){
		x= (s-i+n)%(n/2);
		if(x==0) x=n/2;
		if(pre[i+k-1]-pre[i-1]>sum || (pre[i+k-1]-pre[i-1]==sum && x<ans)){
			sum=pre[i+k-1]-pre[i-1];
			ans=x;
		}
	}
	cout<<ans;
	return 0;
}	