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
	int t; bool flag;
	cin>>t;
	while(t--){
		int k,x,y,z; cin>>k;
		int a[2],b[4],c[8];  flag=false;
		cin>>x>>y>>z;
		a[0]=x; a[1]=-x;
		b[0]=x+y;b[1]=x-y;b[2]=a[1]+y;b[3]=a[1]-y;
		c[0]=b[0]+z;c[1]=b[1]+z;c[2]=b[2]+z;c[3]=b[3]+z;
		c[4]=b[0]-z;c[5]=b[1]-z;c[6]=b[2]-z;c[7]=b[3]-z;

	
	for(int i=0;i<8;i++){
		if(c[i]==k){
			cout<<"WIN"<<'\n';
			flag=true;
			break;
		}
	}
	if(flag==false){
		cout<<"LOSE"<<'\n';
	}
}	
	return 0;
}	