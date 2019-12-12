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
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x;
		deque<int> dq;
		for(int i=0;i<n;i++){
			cin>>x;
			dq.push_back(x);
		}
		int flag=1;
		while(!dq.empty()){
			if(flag==1){
				int u= dq.back();
				dq.pop_back();
				cout<<u<<" ";
				
			}
			 if(flag==-1){
				int u=dq.front();
				dq.pop_front();
					cout<<u<<" ";
			}
			flag*=-1;
		}
		cout<<'\n';
	}
	return 0;
}	