#include<iostream>
using namespace std;

class Bank {
	
	private:
		
		string pwd;
		int id;
		int userid;
		int balance;
		int accountno;
		string name;
		
		
		public:
			
			int getuserid()
			{
				return userid;
			}
			
			string getpwd()
			{
				return pwd;
			}
			
			setdata(int id,int userid,string pwd,string name,int balance,int accountno)
			{
				this->id=id;
				this->userid=userid;
				this->pwd=pwd;
				this->name=name;
				this->balance=balance;
				this->accountno=accountno;
				
				
			}
			
			deposit()
			{
				int amount=120000;
				
				balance+=amount;
				cout<<"total balance is:"<<balance;	
			}
			
			
			withdrawl()
			{
				int amt;
				
		cout << "\t\t\t\t\t\tEnter Amount U want to withdraw: ";
          cin >>amt;
          
          this->balance = this->balance - amt;
          	cout<<"total balance is:"<<balance;	
				
			}
	
	
	
};


int main()
{
	Bank b;
	
	b.setdata(11,2208,"abc","anshi",18000,93276);
	
	int ud,choice;
	string pass;
	
	
	cout<<"enter a user id:";
	cin>>ud;
	cout<<"enter a password:";
	cin>>pass;
	
	
	if(ud==b.getuserid() &&  pass==b.getpwd())
	{
		
		cout<<"you have successfully login";
		
	}
	
	system("CLS");
	
	cout<<"\t\t\t==================================================================================="<<endl;
	cout<<"\t\t\t\t\t\tpress 1 for deposite :"<<endl;
	cout<<"\t\t\t\t\t\tpress 2 for withdrow :"<<endl;
    cout<<"\t\t\t==================================================================================="<<endl;
	
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t  eneter your choice:";
	cin>>choice;
	cout<<"\t\t\t-------------------------------------------------------------------------------------"<<endl;
	
	cout<<endl<<endl;
	system("pause");
	system("CLS");
	
	switch(choice)
	{
		case 1:
			
			b.deposit();
			
			break;
			
			case 2:
				
				
				b.withdrawl();
                break;
		}
	
	
}
