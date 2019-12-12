#include<iostream>
#include<string>
#include<vector>
using namespace std;

int Count_of_Index(vector<string> &A, int sz, char index){  // this is the function to count the character which uses the three parameters as 
	int count_of_index=0;									// specified in the problem.
	for(int i=0;i<sz;i++){
		string s= A[i];
		for(int j=0;j<s.length();j++){						// we are checking all strings of array one by one
			if(s[j]==index){
				count_of_index++;			// if j th element of string is equal to given character, we increase the count
			}
		}
	}
	return count_of_index;				// finally we return the count of all occurences of the character 
}

int main()
{
	vector<string> A(5);			// vector(or array) of size 5 to store 5 separate strings.
	for(int i=0;i<5;i++){
		//cin>> A[i];
		getline (cin, A[i]); 		// we take input one by one of all 5 strings using for loop
		//cout<<A[i]<<endl;
	}
	char index;                  // this is the character whose occurences we have to count
	cin>>index;
	int x= Count_of_Index(A,5,index);  // calling the function written above main() function.
	cout<<x<<'\n';					// finally printing the value obtained from that function.
	return 0;
}	