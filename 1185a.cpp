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
	int a[3],d;
	cin>>a[0]>>a[1]>>a[2]>>d;
	sort(a,a+3);
	ll sum=0;
	if(a[1]-a[0]< d){
		sum+=d-a[1]+a[0];
	}
	if(a[2]-a[1]<d){
		sum+= d- a[2]+a[1];
	}
	cout<<sum;
	return 0;
}	