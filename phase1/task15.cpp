#include<iostream>
using namespace std;

int main()
{
	char ch;
	
	cout<<"enter a charchter:";
	cin>>ch;
	
	if(ch>=97 && ch<=122)
	{

	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		cout<<"This no is vowel";
	}
	else{
		cout<<"This no is constant";
	}
}

return 0;
}
