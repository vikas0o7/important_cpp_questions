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
int t,b,p,f,h,c, sum=0;
int main()
{
	io;
	cin>>t;
	while(t--){
		cin>>b>>p>>f;
		cin>>h>>c; sum=0;
		if(h>c){
			sum+=min(b/2,p)*h;
			b= b- min(b,2*p);
			sum+=min(b/2,f)*c;
		}
		else{
			sum+=min(b/2,f)*c;
			//cout<< sum<<endl;
			b= b- min(b,2*f);
			//cout<< b<<endl;
			sum+= min(b/2,p)*h;
		}
		cout<< sum<<endl;
	}
	return 0;
}	