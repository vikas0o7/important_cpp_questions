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
int factor(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0 ) return i;
		 
}
return n;
}
int main()
{
	io;
	int n; cin>>n;
	vector<int> v;
	sort(v.begin(),v.end());
	int j=0;
	if(n>1)cout<< n<<" ";
	while(n>1 ){
		//error(factor(n));
		if(n/factor(n)!=1)cout<< n/factor(n)<<" ";
		n= n/factor(n);
		//error(n)
	}
	cout<< 1;
	return 0;
}	