#include<iostream>
#include<cmath>
using namespace std;

class Distance{
	
	private:
		
		double theigth,rlength,dis;
		
		public:
			
		setdata(double theight,double rlength){
			
			this->theigth=theigth;
			this->rlength=rlength;
			
		}
		
		cal()
		{
			
			dis=sqrt(rlength*rlength - theigth*theigth);
			
			cout<<"Total distamnce is:"<<dis<<"m";
		}

};
int main()
{
	Distance d;
	
	d.setdata(13,26);
	d.cal();
	
	
	return 0;
}
