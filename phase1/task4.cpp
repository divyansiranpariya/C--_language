#include<iostream>
using namespace std;

class Seat{
	private:
		int c1,c2,temp;
		
	public:
	setdata(int i, int j)
	{
	this->c1=i;
	this->c2=j;
		
	}
	cal()
	{
		this->temp=this->c1;
		this->c1=this->c2;
		this->c2=this->temp;
	}
	
	getdata()
	{
	
	cout<<"after seating exchange:"<<endl<<"seating 1=>"<<this->c1<<"seating 2=>"<<this->c2;
	
}
};

int main(){
	Seat s1;
	
	s1.setdata(1,2);
	
	
	s1.cal();
	s1.getdata();
	
	
	return 0;
}
