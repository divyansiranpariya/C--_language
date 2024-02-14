#include <iostream>
using namespace std;

class Number {
	
private:
    int value;

public:
    
    Number(int val) 
	{
		this->value=val;
	}

    
    void display() {
        cout << "Value: " << value << endl;
    }

    Number(Number &n1, Number &n2) {
        value = n1.value;
        n1.value = n2.value;
        n2.value = value;
    }
};

int main() 
{
  
    Number n1(10);
    Number n2(20);

  
    cout << "Before Swapping:" << endl;
    n1.display();
    n2.display();

    
    Number(n1, n2);


    cout << "After Swapping:" << endl;
    n1.display();
    n2.display();

    return 0;
}

