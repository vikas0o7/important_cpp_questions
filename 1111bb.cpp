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
double sum=0,result=0,t,x;
//double a[100005];
int main()
{
	io;
	int n;
	double m,k; cin>>n>>k>>m;
	vector<int> a;
	for(int i=0;i<n;i++) {cin>>x; a.pb(x); sum+=a[i];}
	//sort(a,a+n);
	sort(a.begin(),a.end());	
	for(int i=0;i<n && m!=-1;i++){
		if(i>0)t+=a[i-1];
	    result=max(result, (sum-t+min((n-i)*k,m--))/(n-i));
	    //error(i,result);
	}
	//cout<<fixed<<setprecision(9)<<result<<endl;
	printf("%.20lf\n",result);
	return 0;
}	