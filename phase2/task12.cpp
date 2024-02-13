#include<iostream>
using namespace std;

class Time{
	
	private:
		
		int sec,s,min,hour;
		
		public:
			
		Time(){
		
		cout<<"enter a seconds:";
		cin>>this->sec;
		cout<<end;
		
		}
		
		cal()
		{
			this->min=this->sec/60;
			this->s=this->sec%60;
			this->hour=min/60;
			min=min%60;
		}
		
		void show()
		{
			
			cout<<hour<<"::"<<min<<"::"<<s;
		}
};

int main()
{

Time t1;

t1.cal();
t1.show();
	
	return 0;
	
}
