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
	int q; cin>>q;
	while(q--){
		int n,x; cin>>n;
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>x;
			m[x]++;
		}
		vector<int> a;
		for(auto it= m.begin();it!=m.end();it++){
			a.push_back(it->second);
		}
		sort(a.begin(),a.end());
		//for(auto j: a) cout<< j<<" ";
		//int sz= a[1];
		bool vis[200005];
		ll sum=0;
		n=a.size();
		memset(vis,false,sizeof(vis));
		for(int i=n-1;i>=0;i--){
			if(vis[a[i]]==false){
				sum+=a[i];
				vis[a[i]]=true;

			}
			else{
				for(int j=a[i]-1;j>=1;j--){

					if(vis[j]==false){
						sum+=j;
						vis[j]=true;
						break;
					}
					else continue;

				}
			}
			//error(a[i],sum);
		}
		cout<<sum<<endl;
		//cout<<endl;
	}
	return 0;
}	