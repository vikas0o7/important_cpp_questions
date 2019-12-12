#include <bits/stdc++.h>
using namespace std;

#define bug(args ...) cerr << __LINE__ << ": ", err(new istringstream(string(#args)), args), cerr << '\n'
void err(istringstream *iss) {}
template<typename T, typename ... Args> void err(istringstream *iss, const T &_val, const Args & ... args) {
    string _name;
    *iss >> _name;
    if (_name.back()==',') _name.pop_back();
    cerr << _name << " = " << _val << "; ", err(iss, args ...);
}

int main() {
   	int x = 1, y = 2, n = 3, m = 4;
   	int ans=2;
    bug(x, y, m, n);
    
    return 0;
}	