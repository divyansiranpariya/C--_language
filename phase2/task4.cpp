#include<iostream>
using namespace std;

int main()
{
	
	int triangle,base=56,height=21,sum=0,r;
	
	triangle=height*base/2;
	
	cout<<"area of traingle:"<<triangle<<endl;
	
	
	while(triangle>0)
	{
		r=triangle%10;
		sum=r+sum;
		triangle=triangle/10;
	}
	cout<<"sum of all degits:"<<sum;
	return 0;
}
