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
ll t, n,a,b, sum=0;
string s;
int main()
{
	io;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n>>a>>b; cin>>s;
		ll h=0;
		for(int i=0;i<s.length()-1;i++){
			if(s[i+1]=='1' && s[i]=='0'){
				sum+= b+2*a;
				h=1;
			}
			
			else if(s[i]=='1' && s[i+1]=='0'){
				if(2*a+b>2*b+a){
					h=1;
					sum+=2*b + a;
				}
				else{
					h=0;
					sum+=2*a+2*b;
				}
			}
			else if(s[i]=='0' && s[i+1]=='0'){
				if(h==0){
					sum+=a+b;
				}
				else{
					if(2*a+b>2*b+a){
						sum+=2*b+a;
					}
					else sum+=2*a+b;
				}
			}
			else if(s[i+1]==s[i] && h==1){
				sum+= (h+1)*b +a;
			}
		error(i,sum)
		}
		sum+=(s[s.length()-1]-'0'+1)*b;
		//cout<< sum<<endl;
	}
	return 0;
}	

/*
94
25
2900000000
13
*/