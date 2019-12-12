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
ll x=INT_MAX,n, s[3005],c[3005], ans[3005],v[3005];
int main()
{
	io;
	cin>>n;
	for(int i=0;i<n;i++){
		ans[i]=INT_MAX;
	}
	for(int i=0;i<n;i++) cin>> s[i];
	for(int i=0;i<n;i++) cin>> c[i];
	for(int j=0;j<n;j++){
		for(int i=0;i<j;i++){
			if(s[i]<s[j]){
				ans[j]= min(ans[j],c[i]+c[j]);
			}
		}
		//error(j,ans[j])
	}	
	//int x= INT_MAX;
	for(int j=0;j<n;j++){
		v[j]=INT_MAX;
		for(int k=j+1;k<n;k++){
			if(s[k]>s[j] && ans[j]>c[j]){
				v[j]= min(v[j], ans[j]+c[k]);
				x= min(x,v[j]);
			}
		}
		//error(j,v[j]);
	}
	if(x>=INT_MAX) x=-1;
	cout<<x;
	return 0;
}	