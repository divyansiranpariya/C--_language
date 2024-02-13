#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
	
	private:
		
	double	side1,side2,side3;
		
		public:
			
			void setdata(double side1,double side2)
			{
				this->side1=side1;
					this->side2=side2;
				
			}
			
			cal()
			{
				side3= sqrt(pow(side1, 2) + pow(side2, 2));
				cout<<"third side is:"<<side3;
			}

};

int main()
{
	Triangle t;
	
	t.setdata(6,13);
	t.cal();

}
