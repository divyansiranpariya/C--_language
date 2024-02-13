#include<iostream>
using namespace std;

class Gst{
	
	private:
	double	amount,gstamount,rate,totalamount;
		
		public:
			Gst(){
				cout<<"enter amount:";
				cin>>this->amount;
				cout<<"enter rate:";
				cin>>this->rate;
				cout<<endl<<endl;
			}
			
			cal()
			{
					gstamount=(amount*rate)/100;
			totalamount=gstamount+amount;
				
			}
			
			void getdata()
			{
				cout<<"Total gst amount is:"<<gstamount<<endl;
				cout<<"Totalamount is:"<<totalamount;
				
			}
		
};

int main()
{
	
	Gst g;
	
	g.cal();
	g.getdata();
	
	return 0;
}
