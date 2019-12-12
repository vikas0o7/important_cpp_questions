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
ll n,u,i;
int main()
{
	io;
	cin>>n;
	for(i=2;i*i<=n;i++){
		if(n%i==0 && !u){
			u=i; n/=i;
		}
		if(n%i==0 && n>i){
			cout<< 1<<endl;
			cout<< u*i; return 0;
		}
	}
	if(!u) {cout<< 1<<endl; cout<<0;}
	else cout<< 2<<endl;
	return 0;
}	