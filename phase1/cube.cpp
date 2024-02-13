#include<iostream>
using namespace std;

class Cube{
	
	private:
		int n,cb;
		
		public:
			
		void setdata(){
				cout<<"enter a number:";
				cin>>this->n;
			}
		
		getdata()
		{
			cb=this->n*this->n*this->n;
			cout<<"cube is:"<<cb;
		}
		
		
};
int main()
{
	Cube c;
	c.setdata();
	c.getdata();
	return 0;
	
}
