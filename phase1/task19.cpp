#include<iostream>
using namespace std;

int main(){

int n,i,ans;

cout<<"which number do you want to print table:";
cin>>n;

for(i=1;i<=10;i++)
{
	ans=n*i;
	
	cout<<n<<"*"<<i<<"="<<ans<<endl;
}

return 0;	
}
