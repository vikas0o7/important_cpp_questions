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
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=0;i<n-1;i++){
		int cnt=0,temp=a[i];
		for(int j=i+1;j<n;j++){
			temp=temp^a[j];
			cnt++;
			if(temp==0 &&cnt%2==1){
				ans++; 
				//error(i+1,j+1)
			}
		}
	}
	cout<<ans;
	return 0;
}	