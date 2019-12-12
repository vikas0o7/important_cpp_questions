#include<bits/stdc++.h>
using namespace std;


const int N = 1e5;  // limit for array size
int n;  // array size
int t[2 * N];

void build() {  // build the tree
  for (int i = n - 1; i > 0; --i)         // here we are storing sum of daughter on parent node
  {
  	if(t[i<<1]>0) t[i]+=t[i<<1];
  	if(t[i<<1|1]>0)t[i]+=t[i<<1|1];
  }
}

void modify(int p, int value) {  // set value at position p
  for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = t[p]+ t[p^1];
}

int query(int l, int r) {  // sum on interval [l, r)
  int res = -1*INT_MAX;
  for (l += n-1, r += n-1; l <=r; l >>= 1, r >>= 1) {
    if (l&1 ) res =max(res, t[l++]);
    if (!(r&1)) res = max(res,t[r--]);
  }
  return res;
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) scanf("%d", t + n + i);
  build();
  int m,x,y; cin>>m;
  while(m--){
  	cin>>x>>y;
  	cout<< query(x,y)<<endl;
  }
  // for(int i=0;i<2*n;i++){
  // 	cout<< t[i]<<endl;
  // }
  return 0;
}