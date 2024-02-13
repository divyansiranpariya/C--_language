#include <iostream>
using namespace std;


void cube(int x[], int y[])
 {
 	int i;
    for (i = 0; i < 4; i++) {
        y[i] = x[i] * x[i] * x[i];
    }
}


double cal( int array[]) 
{
	int i;
    double sum = 0;
    for ( i = 0; i <4; i++)
	 {
        sum += array[i];
    }
    return sum / 4;
}


string Kind(double average) {
    if (average >= 22 && average <= 35) {
        return "TIGHT";
    } else if (average > 35 && average <= 50) {
        return "BALANCED";
    } else if (average > 50) {
        return "TOXIC";
    } else {
        return "LOOSE";
    }
}

int main() {

    int a[4] = {9,4,3,6};
    int ar[4];
    double average;
    cube(a,ar);

    average = cal(ar);

    string kd = Kind(average);

    cout << "Average value: " << average << endl;
    cout << "Array kind: " << kd << endl;

    return 0;
}

