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
	int n; string s;
	cin>>n;
	cin>>s;
	int ans=INT_MAX;
	for(int i=0;i<n-3;i++){
		int a=max(0, min(int('A'-s[i]+26)%26,int (s[i]- 'A'+26)%26));
		int b= max(0,min(int('C'-s[i+1]+26)%26,int (s[i+1]- 'C'+26)%26));
		int c= max(0,min(int('T'-s[i+2]+26)%26,int (s[i+2]- 'T'+26)%26));
		int d=max(0, min(int('G'-s[i+3]+26)%26,int (s[i+3]- 'G'+26)%26));	
		ans=min(ans,a+b+c+d);
		//error(a,b,c,d)
	}
	cout<<ans;
	return 0;
}	