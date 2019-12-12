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
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		//cout<<a[0];
		int curr_sum=a[0],start=0;
		bool flag=false;
		for(int i=1;i<=n;i++){
			//error(start,i,curr_sum);
			//cout<<curr_sum<<endl;
			while(curr_sum> k && start<i){
				curr_sum=curr_sum- a[start];
				start++;
			}
			if(curr_sum==k){
				cout<< start+1<<" "<<i<<endl;
				 flag=true;
				break;
			}
			else if(i<n){
				curr_sum+= a[i];

			}

		}
		if(flag==false)
		cout<< "-1"<<endl;
	}
	return 0;
}	