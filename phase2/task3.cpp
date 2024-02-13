#include<iostream>
using namespace std;

class cal{
	double x;
	public:
		setdata()
		{
		/*	2(x-3)=4x-1;
			2x-6=4x-1;
			-6+1=4x-2x;
			//-5=2x;*/
			x=-5/2;
			
		}
		getdata()
		{
			cout<<x;
		}
};

int main()
{
	cal c;
	c.setdata();
	c.getdata();



return 0;	
}
