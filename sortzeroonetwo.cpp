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
	int t; 
	cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n], sum[n];
		memset(sum,0,sizeof(sum));
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i>0)sum[i]=sum[i-1]+a[i];
			else sum[i]=a[i];
			//error(sum[i],i);
		}
		bool flag=false;
		if(n==1){
			cout<<1<<endl; 
			flag=true;
		}

		//cout<<sum[4]<<endl;
		for(int i=1;i<n;i++){
			if(sum[i-1]==sum[n-1]-sum[i]){
				cout<< i+1<<endl;
				flag=true;
				break;
			}
		}
		if(flag==false){
			cout<<"-1"<<endl;
		}
		
	}
	return 0;
}	