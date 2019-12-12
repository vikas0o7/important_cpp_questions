#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
using namespace std;
int main()
{
	io;
	int q; cin>>q;
	while(q--){
		int n; long long k; string s; cin>>n>>k>>s;
		string res; int cnt=0; bool flag=false;
		for(int i=0;i<s.length();i++){
			if(s[i]=='0'){
				if(cnt<=k){
					res+='0';
					k= k-cnt;
				}
				else{
					res+=string(cnt-k,'1');
					res+='0';
					res+=string(k,'1');
					res+= s.substr(i+1);
					flag=true;
					break;
				}
			}
			else cnt++;
		}
		if(flag==false){
			res+=string(cnt,'1');
		}
		cout<< res<<endl;
	}
	return 0;
}	