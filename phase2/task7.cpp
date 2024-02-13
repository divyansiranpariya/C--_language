#include<iostream>
using namespace std;

  float area(float i)
  {
  	float res;
    res=i*i*3.14;
	
	return res;	
  }
  
  float perimiti(float i)
  {
     return 2*3.14*i;	
  }
  
  float diamiter(float i)
  {
     return i*2;	
  }
 
 
int main()
{
	
	double r,result;
	int ch;
	do{
	
	cout<<"press 1 for find area of circle:"<<endl;
	cout<<"press 2 for find perimeter of circle:"<<endl;
	cout<<"press 3 for conversion of radius into diameter:";
	cout<<"press for exit:";
	
	cout<<endl<<endl;
	
	cout<<"enter your choice:";
	cin>>ch;
	cout<<endl<<endl;
	
	switch(ch)
	{
	
	case 1:
	cout<<"enter a radius:";
	cin>>r;
	

	cout<<"area of circle:"<<area(r)<<endl;
	cout<<endl<<endl;
	break;
	
	case 2:
		
	cout<<"enter a radius:";
	cin>>r;
	
	cout<<"perimiti of circle:"<<perimiti(r)<<endl;
	cout<<endl<<endl;
	break;
		
		case 3:
		
	cout<<"enter a radius:";
	cin>>r;
	
	cout<<"convertion of circle:"<<diamiter(r)<<endl;
	cout<<endl<<endl;
	break;
		
			
		case 4:
			
			cout<<"you are exit:";
			break;
		
		
}


}while(ch!=4);

	return 0;
}
