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
int ans=0;
int recur(int a, int b){
	if(b==0) return 0;
	if(b==1) return a;
	//if(b%2==1) ans+=a;
	//cout<<ans<<endl;
	ans= recur(a,b/2)+ recur(a,b/2);
	if(b%2==1) ans+=a;
	return ans;
}
int main()
{
	io;
	cout<< recur(9,10);
	return 0;
}	