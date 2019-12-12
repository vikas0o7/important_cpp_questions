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
int k,n,x;
vector<int> a[200005];
vector<int> sum(200005);
map<int,pair<int,int> > m;
int main()
{
	io;
	cin>>k;
	//int a[2005][200];
	
	for(int i=1;i<=k;i++){
		cin>>n;
		for(int j=1;j<=n;j++){
			cin>>x;
			a[i].pb(x);
			sum[i]+=x;
		}
	}
	for(int i=1;i<=k;i++){
		for(int j=0;j<a[k].size();j++){
			//j--;
			if(m.find(sum[i]-a[i][j])!=m.end() && m[sum[i]-a[i][j]].first!=i){
				cout<<"YES"<<endl;
				cout<< i<<" "<<j+1<<endl;
				cout<< m[sum[i]-a[i][j]].first<<" "<< m[sum[i]-a[i][j]].second+1<<endl;
				return 0;
			}
			else if(m.find(sum[i]-a[i][j])==m.end()){
				m[sum[i]-a[i][j]].first= i;
				m[sum[i]-a[i][j]].second=j;
			}
		}
	}
	cout<< "NO"<<endl;
	return 0;
}	