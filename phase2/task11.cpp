#include<iostream>
using namespace std;

class Temp{
	
	protected:
		
		double c,f,k;
};

class Cel:public Temp{
	
	public:
		
	void celsius()

{
	cout<<"enter a celsius:";
	cin>>c;
}
};

class Ferhenit:public Cel{
	
	public:
		
		fer()
		{

	f=(c*9/5)+32;
	cout<<"Ferhenit is:"<<f<<endl;
			}
};

class Kelvin:public Ferhenit {
	
	public:
		
		kel()
		{
	k=(f-32)*5/9+273.15;
	cout<<"Kelvin is:"<<k;
	
		}
};

int main()
{
	
	Kelvin k1;
	
	k1.celsius();
	k1.fer();
	k1.kel();
	
	
	
	return 0;
	
}
