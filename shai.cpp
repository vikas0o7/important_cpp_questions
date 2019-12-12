#include<stdio.h>
int main()
{
	int number, sum=0; // sum variable will store sum of all numbers till that point
	while(1){
	scanf("%d", &number); // taking input of the number
	if(number>0){    // if the number is positive i will just add it to the sum
		sum+=number;
	}
	else {printf("done \n"); break;}  // else i will print "done" and exit
	}
	printf("%d \n", sum);     // this is bonus task. i will print sum of all positive numbers in the end
	
	return 0;
}	


