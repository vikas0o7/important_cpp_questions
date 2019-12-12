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
int num;
int v[200005][3];
int main()
{
	io;
	int n; cin>>n;
	vector<int> a(n);
	map<int,int> m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	int freq= INT_MIN;
	for(auto i: m) {
		if(i.second>=freq){
			freq= i.second;
			num= i.first;
		}
	}
	int start=-1;
	for(int i=0;i<n;i++) {
		if(a[i]==num){
			start=i; break;
		}
	}
	cout<< n- freq<<endl;
	int j=start-1,k=0;
	//error(j,num)
	while(j>=0){
		if(a[j]<num){
			cout<< 1<<" "<< j+1<<" "<< j+2<<endl;
			//num=a[j]; j--; 
		}
		else if(a[j]>num){
				cout<<2<<" "<<j+1<< " "<< j+2<<endl;
			 //num=a[j]; j--;
		}
		 j--;

	}
	//error(j)
	j= start+1;
	num= a[start];
	while(j<n){
		if(a[j]>num){
			cout<< 2<<" "<< j+1<<" "<< j<<endl;
			//num=a[j]; 
		}
		else if(a[j]<num){
			cout<< 1<<" "<< j+1<<" "<< j-1+1<<endl;
			//num=a[j]; 
		}
		 j++;
	}
	return 0;
}	