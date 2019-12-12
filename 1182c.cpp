#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long int ll;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;
set<char> vow={'a','e','i','o','u'};
int main()
{
	io;
	int n; cin>>n;
	map<int, map<char, vector<int> > > cc;
	vector<string> words(n);
	for(int i=0;i<n;i++){
		string s; cin>>s;
		words[i]=s;
		int cnt=0; char last=0;
		for(int i=0;i<s.length();i++){
			if(vow.count(s[i])){
				cnt++;
				last=s[i];
			}
		}
		cc[cnt][last].push_back(i);
	}
	vector<pair<int,int> > c1,c2;
	for(auto p: cc){
		vector<int> rem;
		for(auto q: p.second){
			auto v= q.second;
			for(size_t i=0;i+1<v.size();i+=2){
				c2.pb({v[i],v[i+1]});				
			}
			if(v.size()%2==1) rem.pb(v.back());  // becareful
		}
		for(int j=0;j+1<rem.size(); j+=2){
			c1.push_back({rem[j],rem[j+1]});
		}
	}
		while(c1.size()<c2.size()){
			c1.push_back(c2.back());
			c2.pop_back(); 
		}
		int tot= min(c1.size(),c2.size());
		cout<< tot<<'\n';
		for(int i=0;i<tot;i++){
			cout<<words[c1[i].first]<<" "<< words[c2[i].first]<<'\n'
			<<   words[c1[i].second]<<" "<<words[c2[i].second]<<'\n';
		}
	// for(int i=0;i<c2.size();i++){
	// 	cout<< words[c2[i].first]<<" "<<words[c2[i].second]<<" ";
	// }
	return 0;
}	