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
 		int n;
 		cin>>n;
 		int a[n];
 		for(int i=0;i<n;i++){
 			cin>>a[i];
 		}
 		int L[n+2],R[n+2];
 		int lmax= a[0],rmin=a[n-1];
 		for(int i=1;i<=n-2;i++){
 			if(lmax>a[i]){
 				L[i]=lmax;

 			}
 			else{
 				L[i]=lmax;
 				lmax=a[i];
 			}
 		}

 		for(int j=n-2;j>=1;j--){
 			R[j]=rmin;
 			if(rmin>a[j]) rmin=a[j];
 		}
 		int ans=-1;
 		for(int i=1;i<=n-2;i++){
 			if(L[i]<=a[i] && R[i]>=a[i]){
 				ans= a[i];
 				break;
 			}
 		}
 		cout<<ans<<endl;
 	}
 	return 0;
 }	