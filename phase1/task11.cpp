#include<iostream>
using namespace std;

square(int a)
{
	int sqr;
	
	sqr=a*a;
	return sqr;
	
}


int main()
{
int s,res;	
	cout<<"enter a no:";
	cin>>s;
	
	res=square(s);
	
	cout<<res;
	return 0;
}
