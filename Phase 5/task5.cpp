#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    
    if (a > b){
        if (a > c)
		{
            return a;
        }
		else
		{
            return c;
        }
    }
	else if(b >= c)
	{
		return b;
	}
	else
	{
        return c;
    }

  
}

int square(int num){
    return num * num;
}

Component(int num) {
    
    int div = 1,digit;

    while (num / div > 9) {
        div= div*10;
    }

    while (div!= 0) {
        digit = num / div; 
        cout << digit << " "; 
        num = num - (digit * div);
        div= div/ 10; 
    }
    
}

int main() 
{
    int ch;
       int n1,n2,n3;
         double num;
          
   do
   {
        cout << "press 1 for find maximum:" << endl;
        cout << "press 2 for find square:" << endl;
        cout << "press 3 for find components:" << endl;
        cout << "press 4 for exit"<< endl;
        
cout<<endl<<endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) 
		{
            case 1:
             cout << "Enter three numbers:";
            cin >> n1 >> n2 >> n3;
        cout << "Maximum number is:"<< max(n1,n2,n3) << endl;
        cout<<endl<<endl;
            	break;
            
            case 2:                 
                cout << "enter a number:";
                cin >> n1;            
                cout << "Square of the number is = " << square(n1) << endl;
              cout<<endl<<endl;
			    break;
                     
            case 3:
             int num;
                cout << "enter a number:";
                cin >> num;
                
                Component(num);
                break;
        
            case 4:
                cout << "you are exit" << endl;
                break;
            default:
                cout << "invalid choice:" << endl;
        }
    } while(ch!=4);

    return 0;
}

