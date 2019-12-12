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
	vector<int> a(n+1);
	vector<int> sum(n+1,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]= sum[i-1]+a[i];
		//error(i,sum[i])
	}
	if(sum[n]!=0){
		cout<< -1; return 0;
	}
	assert(sum[n]==0);
	vector<int> v; set<int> s;
	for(int i=1;i<=n;i++){
		if(a[i]>0){
			if(s.find(a[i])!=s.end()){
				cout<<-1; return 0;
			}
			else s.insert(a[i]);
			//error(i,s.size());
		}
		else if(a[i]<0){
			if(s.find(-1*a[i])!=s.end()){
				if(sum[i]==0) {v.push_back(i);
					s.clear();
				}
				//error(sum[i])
				//s.erase(s.find(-1*a[i]));
			}
			else {
				cout<<-1; return 0;
			}
			//error(i,s.size());
		}
	}
	if(v.size()==0){
		cout<<-1; return 0;
	}
	cout<< v.size()<<endl;
	for(int i=0;i<v.size();i++){
		if(i==0) cout<< v[i]<<" ";
		else cout<< v[i]-v[i-1]<<" ";
	}
	return 0;
}	