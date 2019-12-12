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
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; string s;
		cin>>n; cin>>s;
		map<string,int> m;
		m[s.substr(0,1)]++;
		for(int i=1;i<n;i++){
			if(s[i]!=s[0]){string st=s.substr(0,i+1);
			m[st]++;}
			else break;
		}
		for(int i=1;i<n;i++){
			cout<<"i="<<i<<endl;
			if(s[i]==s[0]){
				m[s.substr(0,1)]++;
				for(int j=i+1;j<n;j++){
					cout<<"j="<<j<<" ";
					if(s[j]!=s[0]){
						string st= s.substr(i,j-i+1);
					if(m[st]>0)m[st]++;
					else {i=j;break;}
					}
					else {i=j-1;break;}
					if(j==n-1){
						i=n-1;
						break;
					}
				}
				
			}
		}
		int cnt=-1; string ans=s; int r=0;
		for(auto i:m){
			if(i.second>=cnt){
				ans=i.first;
				cnt=i.second;
			}
			else if(i.first.length()>ans.length() && i.second>=cnt){
				ans=i.first;
				cnt=i.second;
				//cout<<i.first<<endl;
			}
		}
		//for(auto i: m) cout<<i.first<<" "<<i.second<<endl;
		cout<<ans<<endl;
	}
	return 0;
}	