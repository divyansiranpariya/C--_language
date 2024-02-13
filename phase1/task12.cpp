#include<iostream>
using namespace std;

int main()
{
	int interest,p,r,n;
	
	cout<<"enter a amount:";
	cin>>p;
	
	cout<<"enter a rate:";
	cin>>r;
	
	cout<<"enter a year:";
	cin>>n;
	
	interest=p*r*n/100;
	
	cout<<"simple interest is:"<<interest;
	
	return 0;
}

