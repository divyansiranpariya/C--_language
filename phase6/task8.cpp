#include<iostream>
#include<cmath>
using namespace std;

class Distance{
	
	private:
		
		double heigth,length,dis;
		
		public:
			
		setdata(double dis ,double length){
			
			this->dis=dis;
			this->length=length;
			
		}
		
		cal()
		{
			
			heigth=sqrt(pow(length,2)-pow(dis,2));
			cout<<"height of wall is:="<<heigth;
			
			
		}

};
int main()
{
	Distance d;
	
	d.setdata(7,15);
	d.cal();
	
	
	return 0;
}
