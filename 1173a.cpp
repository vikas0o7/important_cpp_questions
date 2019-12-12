#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    int rem;
    int zero = 0;
    
    
    cout << "Please enter an integer: ";
    cin >> num;
    string s=""; // we will store all binary characters in the string and then reverse it later in the end.
    if (num < 0)
        cout << "-",
        num = num * -1;

    if (num == 0) 
        cout << zero << endl;
    else
        while (num != 0)
        {
            rem = num % 2;
            num /= 2;
            s+=to_string(rem); // to convert the integer into a character so that we can store it in the string.
            
        }
        string t;	// we will iterate from the end of original string and store its characters in this new string.
        for(int i=s.length()-1;i>=0;i--){
        	t+=s[i];
        }
        cout<<t<< endl;
    
    
    return 0;
} 