#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(1){
	   if(cin.fail() || n<=0){  
	   cin.clear();
	//cin.ignore(numeric_limits<streamsize>::max(),’\n’);
	cout<<“You have entered wrong input”<<endl;
	cin>>n;    		                                  						
 	}			
	else {cout<<"Positive Number: "<<n<<endl; break;         
	}	
	if(!cin.fail()) break;											    
}

// implementing nested loops
	for(int i=1;i*i<=n;i++){                           // in first loop we have to check for 1 to sqrt(n) only
		for(int j=n;j*j>=n;j--){                     // in second loop check from sqrt(n) to n;
			if(i*j==n){									// if we cross sqrt(n) then there will be repetition. you can try replacing i*i<=n in first loop with i<=n and j*j>=n with j>=1 and you will be able to see repeated output
				cout<< i<<"*"<<j<<endl;   // if (i*j==n) print both numbers; you can modify the output here according to your need
			}
		}
	}

	return 0;
}	