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
int a[100005];
int main()
{
	io;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	if(k>n-1){
		cout<< -1; return 0;
	}
	for(int i=k+2;i<=n;i+=2){
		if(i<=n-1) swap(a[i],a[i+1]);
		else swap(a[i],a[1]);
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}	