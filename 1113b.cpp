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

int sum=0;
int main()
{
	io;
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a.begin(),a.end());
	int ans=sum;
	for(int i=n-1;i>=0;i--){
		int x= a[i];
		//cout<<x;
		for(int j=2;j<=x/2;j++){
			if(x%j==0){
				int temp=sum-a[0]-a[i];
				int z= a[i]/j;
				int y=a[0]*j;
				temp+=y+z;
				if(temp<ans) ans=temp;

			}
		}
	}
	cout<<ans;
	return 0;
}	