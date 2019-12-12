#include <iostream> 
#include <cstring> 
using namespace std; 
int t;
int main() 
{ 
    
    cin>>t; 
    ++t;
    while(t--) 
    { 
        string s; bool flag=true;
        //s+=" ";
        getline(cin, s); 
       // cout<<s.length();
        s+=" ";
         if(s.length()==1){
        	continue;
        }
        //cout<<s<<endl;
        //else    cout<<s.length()<<endl;
        if(s.length()<3){
            cout<<"regularly fancy"<<endl; continue; 
        }
         for(int i=0;i<s.length()-2;i++)
          
		{
			if(s[i]=='n' && s[i+1]=='o' && s[i+2]=='t' && s[i+3]==' '&&(i==0 || s[i-1]==' ') ){
				cout<<"Real Fancy"<<'\n'; 
				flag=false;
				break;
			}
		}
		if(flag==true) cout<<"regularly fancy"<<endl;
		
    } 
    return 0; 
} 