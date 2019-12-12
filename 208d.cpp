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
	int n; cin>>n;
	ll p[n],a,b,c,d,e;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	cin>>a>>b>>c>>d>>e;
	vector<ll>m(5,0);
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=p[i];
		while(sum>=a){
			if(sum>=e) { ll k= sum/e;m[5-1]+=k;sum-=(k*e);}
			 if(sum>=d) {ll k= sum/d;m[4-1]+=k;sum-=(k*d);}
			 if(sum>=c) {ll k= sum/c;m[3-1]+=k;sum-=(k*c);}
			 if(sum>=b) {ll k= sum/b;m[2-1]+=k;sum-=(k*b);}
			 if(sum>=a) {ll k= sum/a;m[1-1]+=k;sum-=(k*a);}
		}
	}
	for(auto it: m){cout<<it<<" ";}
	cout<<endl;
	cout<<sum;	
	return 0;
}	