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
	int n,t; 
	cin>>n>>t;
	string s;
	cin>>s;
	for(int j=1;j<=t;j++){
		for(int i=0;i<n-1;i++){
			if(s[i]=='B' && s[i+1]=='G'){
				swap(s[i],s[i+1]);
				i++;
			}
		}
	}
	cout<<s;
	return 0;
}	