#include<iostream>
using namespace std;

int main(){
	
	int dividend,divisor,reminder,quotient;
	
	cout<<"enter a dividend:";
	cin>>dividend;
	
	cout<<"enter a divisor:";
	cin>>divisor;
	
	quotient=dividend/divisor;
	reminder=dividend%divisor;
	
	cout<<"Quotient:"<<quotient<<endl;
	cout<<"Remainder:"<<reminder;
	return 0;
}
