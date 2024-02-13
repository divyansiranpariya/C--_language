#include<iostream>
using namespace std;

int main(){
	
	int i,n,ans;
	
	cout<<"enter a number:";
	cin>>n;
	
for(i=2;i<n/2;i++)
{
	ans=n%i;
	
	if(ans==0)
	{
		cout<<"This number is not prime:";
        
	}
	else{
		
		cout<<"This number is prime:";
	
	}
		
	
}
	
	return 0;
}
