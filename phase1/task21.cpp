#include<iostream>
using namespace std;

int main()
{
	int n,count,d;
	
	cout<<"enter a no:";
	cin>>n;
	
	while(n>0)
	{
		d=n%10;
		count++;
		
		n=n/10;
	}
	cout<<" this number in total digit:"<<count;
	return 0;
}
