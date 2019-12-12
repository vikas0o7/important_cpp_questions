#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;

class person{
	char name[30];
	int age;
public:
	void getdata(void);
	void display(void);
};

void person :: getdata(void){
	//cout<<"Enter Name: ";
	cin>>name;
	//cout<<"Enter age: ";
	cin>>age;
}
void person :: display(void){
	cout<< "Name: "<< name<<endl;
	cout<< "Age : "<< age<<endl;
}

int main()
{
	io;
	person p;
	p.getdata();
	p.display();

	return 0;
}	