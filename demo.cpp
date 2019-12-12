#include <stdio.h>
#define SIZE 80
int main( void ){
char c; // temporarily holds keyboard input
char string[ SIZE ]; // original string
unsigned int count = 0; // length of string
puts( "Enter a sentence:" );
// get sentence to test from user
while ((c = getchar()) != '\n' && count < SIZE ) {
string[ count++ ] = c;
}
string[count] = '\0'; // terminate string
// call the recursive function, testPalindrome and display output
………………….
} // end main