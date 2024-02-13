#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,ans;
	
	cout<<"enter numbers:";
	cin>>n;
	
	
	while(n>0)
	{
		ans=n%10;
	     sum=ans+sum;
	     n=n/10;
	}
	
	cout<<"sum of all digits:"<<sum;
}
	
 } 
