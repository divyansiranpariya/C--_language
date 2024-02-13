#include<iostream>
using namespace std;


int main()
{
	double s1,s2,s3,average;
	
	cout<<"enter a mark of subject 1:";
	cin>>s1;
		cout<<"enter a mark of subject 2:";
	cin>>s2;
		cout<<"enter a mark of subject 3:";
	cin>>s3;
	
	average=(s1+s2+s3)/3;
	
	cout<<"REQUIRED PASSING MARK :"<<average;
	return 0;
	
}
