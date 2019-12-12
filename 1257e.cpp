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
// int CeilIndex(vector<int>& v, int l, int r, int key) 
// { 
//     while (r - l > 1) { 
//         int m = l + (r - l) / 2; 
//         if (v[m] >= key) 
//             r = m; 
//         else
//             l = m; 
//     } 
  
//     return r; 
// } 
// int LIS(vector<int>&v,int n) 
// { 
//     if (v.size() == 0) 
//         return 0; 
  
//     vector<int> tail(v.size(), 0); 
//     int length = 1; // always points empty slot in tail 
  
//     tail[0] = v[0]; 
//     for (size_t i = 1; i < v.size(); i++) { 
  
//         // new smallest value 
//         if (v[i] < tail[0]) 
//             tail[0] = v[i]; 
  
//         // v[i] extends largest subsequence 
//         else if (v[i] > tail[length - 1]) 
//             tail[length++] = v[i]; 
  
//         // v[i] will become end candidate of an existing 
//         // subsequence or Throw away larger elements in all 
//         // LIS, to make room for upcoming grater elements 
//         // than v[i] (and also, v[i] would have already 
//         // appeared in one of LIS, identify the location 
//         // and replace it) 
//         else
//             tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i]; 
//     } 
  
//     return length; 
// }

int LIS(vector<int> &v, int n){  // this function does not store LIS, but length of LIS 
	vector<int> ans;           // will be size of ans vector.
	for(int i=0;i<n;i++){
		auto p= lower_bound(ans.begin(),ans.end(),v[i]);
		if(p==ans.end()) ans.push_back(v[i]);
		else *p=v[i];
	}
	return ans.size();
}
int main()
{
	io;
	int k1,k2,k3;
	cin>>k1>>k2>>k3;
	int a[k1],b[k2],c[k3];
	for(int i=0;i<k1;++i) cin>>a[i];
	for(int i=0;i<k2;++i) cin>>b[i];
	for(int i=0;i<k3;++i) cin>>c[i];
	sort(a, a+k1); sort(b,b+k2);sort(c,c+k3);
	int n=k1+k2+k3; vector<int> d(n,0);
	for(int i=0;i<k1;i++) d[i]=a[i];
	for(int i=0;i<k2;i++) d[i+k1]=b[i];
	for(int i=0;i<k3;++i) d[i+k1+k2]=c[i];
	cout<< k1+k2+k3- LIS(d,k1+k2+k3);	
	return 0;
}	

  
