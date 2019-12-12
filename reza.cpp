#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;                                              // i have taken the input
	if(n<=0) cout<<"please enter positive Number"<<endl; // if number less than 0 , there will be alert msg
	else {cout<<"Positive Number: "<<n<<endl;            // printing the input postive number
	}
	for(int i=1;i*i<=n;i++){                           // in first loop we have to check for 1 to sqrt(n) only
		for(int j=n;j*j>=n;j--){                     // in second loop check from sqrt(n) to n;
			if(i*j==n){									// if we cross sqrt(n) then there will be repetition. you can try replacing i*i<=n in first loop with i<=n and j*j>=n with j>=1 and you will be able to see repeated output
				cout<< i<<"*"<<j<<endl;   // if (i*j==n) print both numbers;
			}
		}
	}

	return 0;
}	