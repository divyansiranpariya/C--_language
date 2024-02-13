#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"how many students details ";
	cin>>n;
	cout<<endl;
	int maths,phy,chem,i;
	
	
	
	for(i=0;i<n;i++)
	{
	cout<<"enter details for student:"<<i+1<<endl;
	cout<<"enter a maths marks:";
	cin>>maths;
	cout<<"enter a physics marks:";
	cin>>phy;
	cout<<"enter a chemestry marks:";
	cin>>chem;
}


	for(i=0;i<n;i++){
	
	if (maths < 0 || maths > 100 || phy < 0 || phy > 100 || chem < 0 || chem > 100){

cout<<"valid number:";
continue;

	if(maths>80 && phy>75 && chem>72)
	{
		cout<<"Great A";
	}
	
	else if((maths>=60 && maths<=80) && (phy>=55 && phy<=75)&& (chem>=50 && chem<=72))
	{
		cout<<"Great B";
	}
	
		
	else if((maths>=40 && maths<=60) && (phy>=35 && phy<=55)&& (chem>=35 && chem<=50))
	{
		cout<<"Great C";
	}
	
	else{
			
	cout<<"Fail";

	}
	cout<<endl;
}
}
	
	
	return 0;
}
