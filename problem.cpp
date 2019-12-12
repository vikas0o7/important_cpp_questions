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
	int x,i=0;
	int a[3];  // an array of size 3 to store the three numbers;
	while(i<3){    // loop which take three integers
		cout<<"enter an integer: ";
		cin>>x;
		if(x<=0) cout<<"Invalid! must be >0"<<endl; //if it is negative we show error message.
		else{
			a[i]=x; i++;
			cout<<x<<endl;
		}
	}
	int ans=0;
	for(int i=0;i<3;i++){
		ans=max(ans,a[i]);
	}
	cout<<"The largest number is: "<<ans;
	return 0;
}	