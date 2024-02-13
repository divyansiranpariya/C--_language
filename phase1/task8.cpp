#include<iostream>
using namespace std;

class Convert{
	
	private:
		int inch,feet,rimn;
		
		public:
			
			setdata(){
				
				cout<<"enter a inch:";
				cin>>this->inch;
				
				
			}
			
			cal(){
				
			feet=inch/12;
			rimn=inch%12;
			cout<<feet<<"feet "<<rimn<<"inch";
				
			}
};


int main()
{
	Convert c;
	
	c.setdata();
	c.cal();
	
	
	return 0;
}
