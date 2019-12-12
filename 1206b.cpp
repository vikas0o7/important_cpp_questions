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
ll sum=0;
int main()
{
	io;
	ll n;cin>>n;
	vector<ll> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	ll cnt=0,i=0,k=0;
	for(;i<n;i++){
		if(a[i]<0){
			cnt++;
			sum+=(-1-a[i]);
		}
		else if(a[i]>0){
			sum+=(a[i]-1);
		}
		else if(a[i]==0){
			k++;
		}
	}
	if(cnt&1 && k>0){
		k--; sum++;
		sum+=k;
	}
	else if(cnt&1 && k==0){
		sum+=2;
	}
	else if(cnt%2==0 && k>0){
		sum+=k;
	}
	cout<< sum;
	return 0;
}	