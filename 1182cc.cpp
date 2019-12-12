#include <bits/stdc++.h>

std::set<char> vow={'a','e','i','o','u'};

int main() {
	//freopen("input","r",stdin);
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n;std::cin>>n;
	std::map<int,std::map<char,std::vector<int>>> cc;
	std::vector<std::string> word(n);
	for(int i=0;i<n;++i) {
		std::string s;
		std::cin>>s;
		word[i]=s;
		int cnt=0;char last=0;
		for(int i=0;i<s.length();++i)
			if(vow.count(s[i])) {
				cnt++;
				last=s[i];
			}
		cc[cnt][last].push_back(i);
	}
	std::vector<std::pair<int,int>> c1,c2;

	for(auto &p : cc) {
		std::vector<int> rem;
		for(auto &q : p.second) {
			auto &v=q.second;
			for(size_t i=0;i+1<v.size();i+=2)
				c2.push_back({v[i],v[i+1]});
			if(v.size()%2==1)
				rem.push_back(v.back());
		}
		for(size_t i=0;i+1<rem.size();i+=2)
			c1.push_back({rem[i],rem[i+1]});
	}
	while(c1.size()<c2.size()) {
		c1.push_back(c2.back());
		c2.pop_back();
	}
	int tot=std::min(c1.size(),c2.size());
	std::cout<<tot<<'\n';
	for(int i=0;i<tot;++i)
		std::cout<<word[c1[i].first]<<' '<<word[c2[i].first]<<'\n'
			<<word[c1[i].second]<<' '<<word[c2[i].second]<<'\n';
	return 0;
}
