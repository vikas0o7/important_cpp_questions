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
int n,b,a;
int v[200005];
int main()
{
	io;
	cin>>n>>b>>a;
	int ans=0,mxa=a;
	for(int i=0;i<n;i++)cin>>v[i];
	for(int i=0;i<n;i++){
		if(v[i]==0){
			if(a>0){
				ans++; a--;
			}
			else if(b>0){
				b--; ans++;
			}
			else break;
		}
		else if(v[i]==1){
			
			if(a==mxa){
				ans++; a--; 
			}
			else if(b>0) {
				ans++; b--;
				if(a<mxa)a++;
			}
			else if(a>0){
				ans++; a--;
			}
			else break;
		}

	}	
	cout<<ans;
	return 0;
}	