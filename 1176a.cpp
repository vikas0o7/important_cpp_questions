#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
	io;
	long long int n,q;
	cin>>n;
	while(n--){
		cin>>q;
		int cnt=0;
		bool flag= true;
		while(q>1){
			if(q%2==0) q/=2;
			else if(q%3==0) q= 2*q/3;
			else if(q%5==0) q= 4*q/5;
			else {
				cout<<-1<<endl; 
				flag=false; 
				break;
			}
			cnt++;
		}
		if(flag==true) cout<< cnt<<endl;
	}
	return 0;
}	