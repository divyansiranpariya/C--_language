#include <iostream>
using namespace std;


double calBMI(double weight, double height) 
{
    return weight/(height*height);
}


void interpretBMI(double bmi)
 {
    cout << "BMI:"<<bmi<<" - ";
    
    if (bmi < 18.5) 
	{
        cout <<"Underweight";
    } 
	else if (bmi>=18.5 && bmi<25) 
	{
        cout << "Normal weight";
    }
	 else if (bmi>=25 && bmi<30)
	  {
        cout << "Overweight";
    } else 
	{
        cout << "Obese";
    }
    cout << endl;
}

int main() {
    double weight,height;

    cout << "Enter weight:";
    cin >> weight;
    cout << "Enter height:";
    cin >> height;


    double bmi = calBMI(weight,height);

    interpretBMI(bmi);

    return 0;
}
