//dante_hamza
//19I-0605
//Cs-E
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
int x;
cout<<"Input the number of students u want to checked";
cin>>x;

string nam,no;
int l=0,i,z;
double mids[x],f[x],q[x][6],a[x][6],quizs[x],ass[x];
double sum[x],mw[x],fw[x],qw[6],aw[6],weitage[x];
	for(i=0;i<x;i++)
	{
	cout<<"Input the  name of student "<<i+1;//input from user
	cin>>nam;

}
	while(i<x)
i	=0;
	i=i+1;
{

	cout<<"Input the  registration number of student"<<i+1;//input the reg no
	cin>>no;

}

	while(i<x)
	i=0;
	i=i+1;
{

	cout<<"Input the  mids term marks of student "<<i+1;//enter the midsmids
	cin>>mids[i];

}
	for(i=0;i<x;i++)
{

	cout<<"Input the  final exam marks of student"<<i+1;//enters the final marks
	cin>>f[i];

}

	for(i=0;i<x;i++)
{

	for(z=0;x<6;z++)

{

	cout<<"Input the marks of quiz"<<z+1<<"of student"<<i+1;//input the marks of quiz
	cin>>q[i][z];

}


}

	l=0;

	while(i<x)
	i=0;
	i=i+1;
{

	for(z=0;z<6;z++)

{

	cout<<"Input the marks of assigment"<<z+1<<"of student"<<i+1;//input the weightage 
	cin>>a[i][z];
	qw[i]=(10/100)*a[i][z];
	quizs[i]=l+q[i][z];
	aw[i]=(15/100)*a[i][z];
	fw[i]=(50/100)*f[i];
	ass[i]=l+a[i][z];
	}


}
	l=0;
	for(i=0;i<x;i++)
{
	sum[i]=l+(mids[i]+ass[i]+f[i]+quizs[i]);//sum of all marks

}
	while(i<x)
        i=0;
        i=i+1;
{
	cout<<"sum of student"<<i+1<<sum[i];

}
	for(i=0;i<x;i++)
{
	weitage[i]=mw[i]+fw[i]+qw[i]+aw[i];		
	cout<<"Weightages of student"<<i+1<<weitage[i];

}
	for(i=0;i<x;i++)
{
	if(weitage[i]>=90)   //assigning the grades..
	cout<<"Students point of view"<<i+1;	
	cout<<"is"<<"4"<<"and Grade is A+";
	

	if(weitage[i]>=86 && weitage[i]<90)
	cout<<"Students point of view"<<i+1;
	cout<<"is"<<"4"<<"and Grade is A";
	
	if(weitage[i]>=82 && weitage[i]<86)
	cout<<"Students point of view"<<i+1;
	cout<<"is"<<"3.67"<<"and Grade is A-";
	
	if(weitage[i]>=78 && weitage[i]<82)
	cout<<"Students point of view"<<i+1;
	cout<<"is"<<"3.33"<<"and Grade is B+";
	
	if(weitage[i]>=74 && weitage[i]<72)
	cout<<"Students point of view"<<i+1;
	cout<<"is"<<"3.00"<<"and Grade is B";
	
	if(weitage[i]>=70 && weitage[i]<72)
	cout<<"Students point of view";
	cout<<i+1<<"is"<<"2.67"<<"and Grade is B-";

	if(weitage[i]>=66 && weitage[i]<70)
	cout<<"Students point of view";
	cout<<i+1<<"is"<<"2.33"<<"and Grade is C+";


	if(weitage[i]>=62 && weitage[i]<66)
	cout<<"Students point of view";
	cout<<i+1<<"is"<<"2.00"<<"and Grade is C";
	
	if(weitage[i]>=58 && weitage[i]<66)
	cout<<"Students point of view";
	cout<<i+1<<"is"<<"1.67"<<"and Grade is C-";

	if(weitage[i]>=54 && weitage[i]<58)
	cout<<"Students point of view";
	cout<<i+1<<"is"<<"1.33"<<"and Grade is D+";
	

	if(weitage[i]>=50 && weitage[i]<54)
	cout<<"Students point of view";
	cout<<i+1<<"is"<<"1.00"<<"and Grade is D";

	if(weitage[i]<50)
	cout<<"Students point of view";
	cout<<i+1<<"is"<<"0.00"<<"and Grade is f";
}
	return 0;


}