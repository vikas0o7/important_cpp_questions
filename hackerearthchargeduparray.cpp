#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int m = 1e9+7;
int main()
{
	//io;
	// cin.tie(NULL); cout.tie(NULL);
	int t;
	scanf("%d",&t);
	//pow();
	while(t--){
		int n; 
		scanf("%d",&n);
		ll a; ll sum=0;
		if(n>64) {printf("0\n");
		for (int i = 0 ; i < 1 ; i++){
			cin.ignore(i, '\n')4 6
				}
		continue;}
		int x= 1<<(n-1);
		for(int i=0;i<n;i++){
			scanf("%lld",&a);
			if(a>= x ) sum=(sum+a)%m;	
		} 
		printf("%lld", sum);
		printf("\n");
		fflush(stdin);
	}
	return 0;
}	