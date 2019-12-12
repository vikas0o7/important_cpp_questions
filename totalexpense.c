#include<stdio.h>
#include<stdlib.h> 
#define MX 12                 		// defining the number of months

void totalExpense(int a[]){      	// writing the function to find total expense
	int ans=0;
	for(int i=0;i<12;i++){
		ans=ans+a[i];  				 // adding the expense of each month
	}
	printf("Total Expense is: %d", ans);   // finally printing the total expense
}
int main()
{
	int a[MX];                  	 //initialising the array to store expenses of each month
	for(int i=0;i<12;i++){
		scanf("%d",&a[i]);          // scanning expense for each month
	}
	for(int i=1;i<=12;i++){
		printf("Month %d = %d \n", i, a[i-1]);  // printing expense for each month
	}
	totalExpense(a);        // calling totalExpense function which is written above main()
	return 0;
}	