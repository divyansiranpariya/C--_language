#include<iostream>
using namespace std;

int main()
{
	int n,d,sum=0,r;
	
	cout<<"enter numbers:";
	cin>>n;
	
	d=n;
	while(n>0)
	{
		r=n%10;
		cout<<r<<endl;
	    sum=r+(sum*10);
			n=n/10;
	}
	
	if(d==sum){
		cout<<"This number is palidrome";
		
	}
	else{
			cout<<"This number is not palidrome";
	}
	
}
