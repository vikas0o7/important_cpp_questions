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
ll temp,sum,a[1005],b,maxb=0,minb=0, lf,rf;
int main()
{
	io;
	int n,w;
	cin>>n>>w;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		b+=a[i];
		maxb=max(maxb,b); minb=min(minb,b);
	}
	//error(maxb,minb);
	if(minb<0) lf=-minb; else lf=0;
	if(maxb>0) rf=w-maxb;
	else rf=w;
	cout<< max(1LL*0,rf-lf+1);
	return 0;
}	