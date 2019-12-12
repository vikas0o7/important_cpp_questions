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
	string s; cin>>s;
	int n=s.length();
	if(n<2){cout<<"No";return 0;}
	int j=0,cnt=0; bool flag=true;
	while(++j<n){
		for(int i=0;i<s.length()-1;i++){
			if(s[i]==s[i+1]){
				s.erase(s.begin()+i,s.begin()+i+1);//s.erase(s.begin()+i+1);
				cnt++;
			}
			else if(i==s.length()-2) {flag=false;break;}
		}
		if(flag==false)break;
			//error(s.length())
	}
	error(s.length())
	if(cnt%2==0) cout<<"No";
	else cout<<"Yes";
	return 0;
}	