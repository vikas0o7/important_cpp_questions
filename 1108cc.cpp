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
	int n; string s;
	cin>>n; cin>>s; int cnt=0;
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]){
			if(s[i]=='R'){
				cnt++;
				if(i==n-1) {s[i]='G';break;}
				if(s[i+1]=='R') s[i]='G';
				else if(s[i+1]=='G') s[i]='B';
				else s[i]='G';
			}
			else if(s[i]=='G'){
				cnt++;
				if(i==n-1) {s[i]='B';break;}
				if(s[i+1]=='R') s[i]='B';
				else if(s[i+1]=='G') s[i]='B';
				else s[i]='R';
			}
			else if(s[i]=='B'){
				cnt++;
				if(i==n-1) {s[i]='R';break;}
				if(s[i+1]=='R') s[i]='G';
				else if(s[i+1]=='G') s[i]='R';
				else s[i]='R';
			}
	//error(i,cnt)
		}
	
		}
	cout<<cnt<<endl;
	cout<<s;
	return 0;
}	