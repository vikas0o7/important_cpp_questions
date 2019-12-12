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
		string s; cin>>s;
		int n=s.length();
		vector<int> odd;vector<int> even;
		for(int i=0;i<n;i++){
			int x= s[i]-'0';
			if(x%2==0) even.push_back(x);
			else odd.push_back(x);
		}
		int i=0, j=0;
		string ans="";
		while(i<odd.size() || j< even.size()){
			if(i==odd.size()){
				ans+=to_string(even[j]); j++;
			}
			else if(j==even.size()){
				ans+=to_string(odd[i]); i++;
			}
			else if(odd[i]<even[j]){
				ans+=to_string(odd[i]); i++;
			}
			else{
				ans+=to_string(even[j]);j++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}	