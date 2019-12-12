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
unsigned long long m= 7e18 ;
vector<ll> a;
set<ll> s;
void sieve(){
	ll x=1;
	while(x*3<=m){
		//cout<<x<<endl;
		a.push_back(x);
		x=x*3;
	}
	a.push_back(x);
	return ;
}
int main()
{
	io;
	int q; cin>>q;
	sieve();
	while(q--){
		ll n;
		cin>>n;
		if(n==1){
			cout<<1<<endl; continue;
		} bool flag=false;
		auto it= lower_bound(a.begin(),a.end(), n);
		ll i= it-a.begin()-1; ll sum=0;
		//cout<< i<<endl;
		//cout<< *it<<endl;
		//s.clear();
		while(i>=0){
			//cout<<a[i]<<" "<< n<<endl;
			if(a[i]<=n){
				
				n=n-a[i];
				 sum+=a[i];
				// cout<< n<<" "<<endl;//
				if(n==0){
					cout<< sum<<endl;
					flag=true; break;
				}
			}
			else{
				cout<< sum+a[i]<<endl ; flag=true;break;
			}
			i--;
		}
		if(!flag) cout<< *it<<endl;
		// if(flag==true) continue;
		// if(n!=0) {
		// 	if(s.size()==0) cout<< *it<<endl;
		// 	else{
		// 		auto itr= s.begin();
		// 		cout<< *itr<<endl;
		// 	}
		// }

	}
	return 0;
}	