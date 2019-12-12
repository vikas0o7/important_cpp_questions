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
string temp="";
vector<string> ans;
int n;
void generate(string &s, int index){
	cout<< temp<<endl;
	if(index==n) return ;
	for(int i=index;i<s.length();i++){
		temp+=s[i];
		generate(s, index+1);
		temp.pop_back();
	}
	return ;
}

int main()
{
	io;
	string s;
	cin>>s;
	n=s.length();
	generate(s,0);
	//cout<<ans.size()<<endl;
	return 0;
}	