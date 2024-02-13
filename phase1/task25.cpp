#include<iostream>
using namespace std;

 int main(){
	int n1,n2,n3,n4;
	
	cout<<"enter a first number:";
	cin>>n1;
    cout<<"enter a second number:";
	cin>>n2;
    cout<<"enter a third number:";
	cin>>n3;
	cout<<"enter a fourth number:";
	cin>>n4;
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			if(n1>n4)
			{
				cout<<"n1 is largest:"<<n1;
			}
			else{
				cout<<"n4 is largest:"<<n4;
			}
		}
		else{
			if(n3>n4)
			{
				cout<<"n3 is largest:"<<n3;
			}
			else{
				cout<<"n4 is largest:"<<n4;
			}
		}
}
	else{
		
	if(n2>n3)
	
	{
		if(n2>n4)
		{
			cout<<"n2 is largest:"<<n2;
		}
		else{
			cout<<"n4 is largest:"<<n4;
		}
	}
		
	else{
		if(n3>n4)
		{
			cout<<"n3 is largest:"<<n3;
		}
		else{
			cout<<"n4 is largest:"<<n4;
		}
		}
	}
	

    return 0;

}
