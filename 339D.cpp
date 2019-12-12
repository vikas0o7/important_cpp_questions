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
const int N = 150000;  // limit for array size
int n,m,cnt,x; bool flag=false,flag1;
int t[2*N +1];
void build(){
	for(int i=n-1;i>0;i--){
		if(cnt<x && flag==true){t[i]=t[i<<1]^t[i<<1|1]; ++cnt; if(cnt==x){flag=false;x>>=1;cnt=0;}}
		else if(cnt<x && flag==false){t[i]=t[i<<1]|t[i<<1|1]; ++cnt; if(cnt==x){flag=true;x>>=1;cnt=0;}}
	}
}
void modify(int p,int value){
	for(t[p+=n]=value;p>1;p>>=1){
		if(flag1==false){
			t[p>>1]=t[p]^t[p^1];
			flag1=true;
		}
		else{
			t[p>>1]=t[p]|t[p^1];
			flag1=false;
		}
	}
}
int main()
{
	io;
	cin>>n>>m; n= 1<<n;
	int z,y; x=n/2;
	for(int i=0;i<n;i++) cin>>t[n+i];
	build();
	//for(int i=1;i<2*n;i++) cout<<t[i]<<" ";
	for(int i=0;i<m;i++){
		cin>>z>>y;
		z-=1;
		flag1=true;
		modify(z,y);
		 //for(int i=1;i<2*n;i++) cout<<t[i]<<" ";
		// cout<<endl;	
		cout<<t[1]<<endl;
	}	
	return 0;
}	