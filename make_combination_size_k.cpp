// C++ program to print all combinations of size 
// k of elements in set 1..n 
#include <bits/stdc++.h> 
using namespace std; 

void makeCombiUtil(vector<vector<int> >& ans, 
	vector<int>& tmp, int n, int left, int k) {

	if(k==0){
		ans.push_back(tmp);
		return ;
	}
	for(int i=left;i<=n;i++){
		tmp.push_back(i);
		makeCombiUtil(ans,tmp,n,i+1,k-1);
		tmp.pop_back();
	}
}

// Prints all combinations of size k of numbers 
// from 1 to n. 
vector<vector<int> > makeCombi(int n, int k) 
{ 
	vector<vector<int> > ans; 
	vector<int> tmp; 
	makeCombiUtil(ans, tmp, n, 1, k); 
	return ans; 
} 

// Driver code 
int main() 
{ 
	// given number 
	int n = 6; 
	int k = 3; 
	vector<vector<int> > ans = makeCombi(n, k); 
	for (int i = 0; i < ans.size(); i++) { 
		for (int j = 0; j < ans[i].size(); j++) { 
			cout << ans[i][j]<< " "; 
		} 
		cout << endl; 
	} 
	return 0; 
} 
