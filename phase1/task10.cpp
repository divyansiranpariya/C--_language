#include<iostream>
using namespace std;

int main()
{
	
	int totaldays,year,reweek,week,redays;
	
	cout<<"enter a days:";
	cin>>totaldays;
	
	year=totaldays/365;
	reweek=totaldays%365;
	
	week=reweek/7;
	redays=reweek%7;
	
	cout<<endl;
	
	cout<<"year=>"<<year<<endl;
	cout<<"week=>"<<week<<endl;
	cout<<"days=>"<<redays<<endl;
	
	return 0;
	
}
