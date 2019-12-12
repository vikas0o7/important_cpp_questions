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
	string s="aeiou";
	int k,n=0,m=0;
	cin>>k;
	for(int i=5;i<=k;i++){
		if(k%i==0 && k/i>=5){
			n= i;
			m=k/i;
			break;
		}
	}
	if(n==0 || m==0){
		cout<<-1; return 0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<s[(i+j)%5];
		}
	}
	return 0;
}	