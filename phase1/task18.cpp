#include<iostream>
using namespace std;

int main(){
	
	int n,f=1;
	
	cout<<"enter a number:";
	cin>>n;
	
	while(n>0)
	{
		f=n*f;
		n--;
	
	}
	
	cout<<"Factorial :"<<f;
	return 0;
}
