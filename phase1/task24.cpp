#include<iostream>
using namespace std;

int main()
{
	char i,j,len=0,str[25];
	
	
	cout<<"enter a string :";
	cin>>str;
	
	for(i=0;str[i]!='\0';i++)
	len++;
	
	i=0;
	j=len-1;
	
	while(i<j)
	{
		if(str[i]!=str[j])
		break;
		
		i++;;
		j--;
	}
	
	if(i>=j)
	{
		cout<<"string is palidrome:";
		
	}
	else{
		cout<<"string is not palidrome:";
	}
	return 0;
}
