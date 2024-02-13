#include<iostream>
using namespace std;

class Income{
	
	private:
		
		double income;
		double tax=0;
		
		public:
			
			Income(double i)
			{
				this->income=i;
			}
			
			cal()
			{
				
				if(income<=200000)
				{
					tax=0;
				}
				else if(income<=500000)
				{
					tax=(income-200000)*0.05;
				}
				
				else if(income<=100000)
				{
					tax=+(income-500000)*0.02;
				}
				
				else{
					
					tax=+(income-100000)*0.03;
				}
				return tax;
			}
			
};

int main()
{
	Income i1(300000);
	
	taxcal=i1.cal();
	
	cout<<"your income tax is:"<<taxcal<<endl;
	return 0;
}
