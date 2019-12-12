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
ll m, n; 
pair<int, ll> p[110];
int main()
{
	io;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i].second;
		m= p[i].second; ll cnt=0;
		while(m%3==0){
			cnt--;
			m/=3;
		}
		while(m%2==0){
			cnt++;
			m/=2;
		}
		p[i].first=cnt;
	}
	sort(p,p+n);
	for(int i=0;i<n;i++) cout<< p[i].second<<" ";
	return 0;
}	