#include<iostream>
using namespace std;

int main()
{
	int x=0,y=1,n,i,z,sum=0;
	
	
	cout<<"enter a no:";
	cin>>n;
	
	cout<<x;
	cout<<y;
	
	for(i=0;i<n;i++)
	{
		z=x+y;
		
		cout<<" "<<z;
		x=y;
		y=z;
	}
	
	return 0;
}
