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
		set<char> s1,s2,s3,s4;
		vector<string> v(n);
		set<string> st; int ans=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			//s.insert(v[i]);
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<n;j++){
				if(i==0) s1.insert(v[j][i]);
				if(i==1) s2.insert(v[j][i]);
				if(i==2) s3.insert(v[j][i]);
				if(i==3) s4.insert(v[j][i]);
			}
		}

		for(int i=0;i<n;i++){
			string x= v[i];
			if(st.find(x)==st.end()) st.insert(x);
			else {
				if(s1.find(x[0])!=s1.end()){
					for(int j=0;j<10;j++){
						char y= j +'0';
						if(s1.find(y)==s1.end()){
							v[i][0]= y; ans++;
							s1.insert(y);  break;

						}
					}
					st.insert(x);goto vikash;
				}
				if(s2.find(x[1])!=s2.end()){
					for(int j=0;j<10;j++){
						char y= j +'0';
						if(s2.find(y)==s2.end()){
							v[i][0]= y; ans++;
							s2.insert(y); break;

						}
					}
					st.insert(x);goto vikash;
				}
				if(s3.find(x[2])!=s3.end()){
					for(int j=0;j<10;j++){
						char y= j +'0';
						if(s3.find(y)==s3.end()){
							v[i][0]= y; ans++;
							s3.insert(y); break;

						}
					}
					st.insert(x); goto vikash;
				}
				if(s4.find(x[3])!=s4.end()){
					for(int j=0;j<10;j++){
						char y= j +'0';
						if(s4.find(y)==s4.end()){
							v[i][0]= y; ans++; break;
							s4.insert(y); 
						}
					}
					st.insert(x); goto vikash;
				}
				
			}
			vikash:
			continue;
		}
		cout<<ans<<endl;
		for(int i=0;i<n;i++) cout<<v[i]<<endl;
	}
	return 0;
}	