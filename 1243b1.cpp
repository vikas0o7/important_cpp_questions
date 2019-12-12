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
		string s,t;
		cin>>s>>t;
		vector<int> v;
		for(int i=0;i<n;i++){
			if(s[i]!=t[i]) {
				v.push_back(i);
				//cout<<i<<endl;
			}
			//cout<< v.back()<<endl;
		}
		if(v.size()==2 ) {
			for(int i=0;i<2;i++){
				string temp1, temp2;
			temp1= s; temp2=t;
			int x= v[0],y =v[1];
			swap(temp1[x],temp2[y]);
			if(temp1==temp2){
				cout<< "Yes"<<endl;
				goto vikash;
			}
			}
			cout<<"No"<<endl;
		}

		else cout<<"No"<<endl;
		// string temp1, temp2;
		// for(int i=0;i<v.size();i++){
		// 	for(int j=0;j<v.size();j++){
		// 		temp1=s; temp2=t;
		// 		temp1[i]= temp2[j];
		// 		temp2[j]= s[i];
		// 		if(temp1==temp2){
		// 			cout<< "Yes"<<endl;
		// 			goto vikash;
		// 		}
		// 	}
		// }
		vikash:
		continue;
		//cout<<"No"<<endl;
	}
	return 0;
}	