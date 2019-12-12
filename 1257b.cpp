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
int factor(ll x){
	ll a=0;
	while(x%2==0){
		a++;
		x=x/2;
	}
	return a;
}
int main()
{
	io;
	int t; cin>>t;
	while(t--){
		ll x, y; cin>>x>>y;
		if(x==1){
			if(y==1){
				cout<<"yes"<<endl; continue;
			}
			else {cout<<"no"<<endl; continue;}
		}
		else if(x<=3 && x>1){
			if(y<=3) {
				cout<<"yes"<<endl; continue;

			}
			else {cout<<"no"<<endl ; continue;}
		}
		else {
			cout<<"yes"<<endl; continue;
		}
		
	}
	return 0;
}	