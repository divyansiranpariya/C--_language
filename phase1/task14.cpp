#include<iostream>
using namespace std;

int main()

{
	
	int year;
	
	cout<<"enter a year:";
	cin>>year;
	
	cout<<endl;
	
	if(year%4==0 || year%400==0 && year%100!=0 )
	{
		cout<<"This is leapyear:";
		
	}
	else{
		cout<<"This is nott leap year:";
	}
	return 0;
}
