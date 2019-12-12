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
	int x;cin>>x;
	while(x--){
		string s,t;
		cin>>s>>t;
		int n=s.length(); int m= t.length();
		int j=0;
		bool flag=false;
		for(int i=0;i<m;i++){
			if(t[i]==s[j]){
				j++;

			}
			else if(t[i]==s[j-1]){
				continue;
			}
			else {
				cout<<"NO"<<endl; flag=true; break;
			}
		}
		if(flag==true) continue;
		if(j==n){cout<< "YES"<<endl;}
		else cout<<"NO"<<endl;
	}
	return 0;
}	