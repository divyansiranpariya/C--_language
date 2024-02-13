#include<iostream>
using namespace std;

int main()
{
	int arm=0,r,n,d;
	

	cout<<"enter a no:";
	cin>>n;
		d=n;
	while(n>0)
	{
		r=n%10;
		
		arm=(r*r*r)+arm;
		n=n/10;
	}
	
	cout<<endl;
	if(d==arm)
	{
		cout<<"This number is armstrong:";
		
	}
	else{
			cout<<"This number is not armstrong:";
		
	}
	
	return 0;
}
