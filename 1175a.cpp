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
	int t;
	cin>>t;
	while(t--){
		ll n,k; 
		cin>>n>>k;
		ll cnt=0;
		while(n>0){
			if(n%k==0) {n=n/k; cnt++;}
			else
			{
				cnt+=(n%k);
				n= n- (n%k);
				
			}
			//error(n,cnt);
		}
		cout<<cnt<<endl;
	}
	return 0;
}	