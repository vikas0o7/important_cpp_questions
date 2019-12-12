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
	int a[10]={1,2,5,10,20,50,100,200,500,2000};
	//cout<<a[1];
	while(t--){
	    int n,x=0; 
	    cin>>n;
	    int cnt=0;
	    for(int i=9;i>=0;i--){
	       if(n>=a[i]){
	       	//	error(a[i],n/a[i]);
	            x= n/a[i];
	           for(int j=0;j<x;j++){
	               cout<< a[i]<<" ";
	           }
	            n=n%a[i];
	           
	          // error(n);
	           //cout<<n<<endl;
	           if(n==0)break;
	           
	       }
	       
	       //else continue;
	    }
	   // cout<<'\n'<<endl;
	}
	
	
	return 0;
}