#include<iostream>
using namespace std;

int main()
{
	
	int s,e,average,j,count=0,sum=0;
	
	cout<<"enter a no:";
	cin>>s;
	cout<<"enter a no:";
	cin>>e;
	
	
	for(j=s;j<e;j++)
	{
		if(j%2==0)
		{
			cout<<j;
			count++;
			sum=j+sum;
		}
	
	}
	average=sum/count;
cout<<"average of even no:"<<average;
	return 0;
}
