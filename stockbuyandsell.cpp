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
	while(t--){
		int n; cin>>n;
		int a[n+1],local[n];
		//vector<pair<int,int> > v;
		vector<int> vec;
		for(int i=0;i<n;i++) cin>>a[i];
		// for(int i=0;i<n;i++){
		// 	local[i]=a[i+1];
		// }	
		int i=0;
		while(a[i]<a[0] && a[i+1]<a[i]){
			i++;
		}
		//error(i)
		a[n]=-1;	
		bool flag=false;    // not bought
		for(;i<n;i++){
			if(flag==true && a[i+1]<a[i]){ // flag true mtlb buy kr rkha hai.
				flag=false;
				vec.pb(i);
			}
			else if(flag==false && a[i+1]>a[i]){
				flag=true;
				vec.pb(i);
			}
		}
		for(int it=0;it+1<vec.size();it+=2){
			//error(it)
		cout<<"("<< vec[it]<<" "<<vec[it+1]<<")"<<" ";
		//cout<<vec.size()<<endl;	
		// if(vec.size()<2){
		//     cout<<"No Profit";
		// }
		}
		//error(vec.size())
		cout<<'\n';
	}
	return 0;
}	