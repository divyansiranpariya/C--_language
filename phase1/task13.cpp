#include<iostream>
using namespace std;

int main()

{
	
	char ch;
	
	cout<<"enter a char:";
	cin>>ch;

cout<<endl;
if(ch>=65 && ch<=90)
{
	cout<<ch<<" is a uppercase:";
}
if(ch>=97 && ch<=122)
{
	cout<<ch<<"  is a lowercase:";
}
if(ch>='0' && ch<='9')
{
	cout<<ch<<" is a digit:";
}
	
return 0;

}
