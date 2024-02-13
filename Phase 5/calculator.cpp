#include<iostream>
using namespace std;


double add(double a,double b) 
{
    return a+b;
}

double sub(double a,double b)
 {
    return a-b;
}


double multi(double a,double b)
 {
    return a*b;
}

double divi(double a,double b) 
{
        return a / b;
    
}
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
	
		cout<<"enter a no:";
		cin>>n1;
		cout<<"enter a no:";
		cin>>n2;
		
	switch(ch)
	{
		
		case 1: 
		cout<<"Addition is:"<<add(n1,n2);
		cout<<endl<<endl;
		
		break;
		case 2:
		cout<<"subtraction is:"<<sub(n1,n2);
		cout<<endl<<endl;
		break;
		
		case 3:
		cout<<"multiplication is:"<<multi(n1,n2);
		cout<<endl<<endl;
		break;
		
		case 4:
		cout<<"divison is:"<<divi(n1,n2);
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
