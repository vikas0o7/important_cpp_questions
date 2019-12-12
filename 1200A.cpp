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
int l=0,r=0,lt=0, rt=0;
int main()
{
	io;
	int n; cin>>n;
	
	char a[n]; int b[100000];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++) {
		cin>> a[i];
		if(a[i]=='L') l++;
		else if(a[i]=='R') r++;
		else if(a[i]<='5') lt++;
		else rt++;
	}
	
	l= l- lt;
	r=r- rt;
	//error(l,r,lt,rt)
	for(int i=n-1;i>=0;i--){
		if(a[i]>='0' && a[i]<='9'){
			b[int (a[i])-48]=-1;
			//error(int(a[i])-48)
		}
		else break;
	}
	//cout<< b[9]<<endl;
	//return 0;
	for(int i=0;i<10;i++){
		if(l>0 && b[i]!=-1){
			b[i]=1; l--;
		}

	}
	//cout<<r<<endl;
	for(int i=9;i>=0;i--){
		if(r>0 && b[i]!=-1){
			b[i]=1; r--;
		}
		//error(i,b[i])
	}
	//for(int i=0;i<n;i++) cout<< b[i]<<" ";
	for(int i=0;i<10;i++){
		if(b[i]==-1) b[i]=0;
	}
	for(int i=0;i<10;i++) cout<< b[i];
	return 0;
}	