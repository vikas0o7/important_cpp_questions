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
ll n,qx,q[200005],temp;
vector<ll> a(200005); 
int main()
{
	io;
	cin>>n>>qx;
	vector<ll> sum(n,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i>0) sum[i]=sum[i-1]+a[i];
		else sum[i]=a[i];
	}
	vector<ll> :: iterator lr,ur;
	for(int i=0;i<qx;i++){
		cin>>q[i];
		temp+=q[i];
		if(temp>=sum[n-1]){
			cout<< n<<endl;
			temp=0;
		}
		else {
			lr = lower_bound (sum.begin(), sum.end(), temp);
			ur = upper_bound (sum.begin(), sum.end(), temp); 
			if(lr==ur){
				cout<< n-(lr-sum.begin())<<endl;
			}
			else{
				cout<< n- (lr- sum.begin())-1<<endl;
			}
		}
		//error(temp)
	}
	return 0;
}	