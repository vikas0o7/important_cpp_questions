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
	int n,k; cin>>n>>k;
	int sum[k+1];
	memset(sum,0,sizeof(sum));
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum[i%k]+=a[i];
	}
	int ans=INT_MAX; int temp=-1;
	for(int i=0;i<k;i++){
		if(sum[i]<ans){
			ans= sum[i];
			temp=i+1;
		}
	}
	//for(int i=0;i<k;i++) cout<< sum[i]<<endl;
	cout<<temp;
	return 0;
}	