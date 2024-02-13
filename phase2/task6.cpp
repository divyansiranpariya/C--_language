#include<iostream>
using namespace std;

 int main()
{
	
	int n1,n2,ans,ch;
	
	do{

	cout<<"press 1 for addition(+):"<<endl;
	cout<<"press 2 for subtraction(-):"<<endl;
	cout<<"press 3 for multiplication(*):"<<endl;
	cout<<"press 4 for divison:(/)"<<endl;
	cout<<"press 5 for exit:"<<endl;
	
	cout<<"enter your choice:";
	cin>>ch;
	
	switch(ch)
	{
		
		case 1: 
		
		cout<<"enter a no:";
		cin>>n1;
		cout<<"enter a no:";
		cin>>n2;
		ans=n1+n2;
		cout<<"Addition is:"<<ans;
		cout<<endl<<endl;
		
		break;
		case 2:
			
		cout<<"enter a no:";
		cin>>n1;
		cout<<"enter a no:";
		cin>>n2;
		ans=n1-n2;
		cout<<"subtraction is:"<<ans;
		cout<<endl<<endl;
		break;
		
		case 3:
			
		cout<<"enter a no:";
		cin>>n1;
		cout<<"enter a no:";
		cin>>n2;
		ans=n1*n2;
		cout<<"multiplication is:"<<ans;
		cout<<endl<<endl;
		break;
		
		case 4:
			
		cout<<"enter a no:";
		cin>>n1;
		cout<<"enter a no:";
		cin>>n2;
		ans=n1/n2;
		cout<<"divison is:"<<ans;
		cout<<endl<<endl;
		break;
		
		case 5:
			
			cout<<"you are exit :"<<endl;
			break;
			
			default:
				
				cout<<"invalid choice:"<<endl;
				
			
	}
	
	}while(ch!=5);
	
	
	
	return 0;
}
