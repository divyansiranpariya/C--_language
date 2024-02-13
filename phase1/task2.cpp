#include<iostream>
using namespace std;

class Multi{
	
	private:
		int a,b,c,res;
		
		public:
			setdata(int x,int y,int z)
			{
				this->a=x;
				this->b=y;
				this->c=z;
			}
			
			disp()
		{
			this->res=this->a*this->b*this->c;
			cout<<"multiplication:"<<this->res;
		}
		
		
};

int main(){
	
	Multi m;
	
	m.setdata(2,3,4);
	m.disp();
	return 0;
	
}
