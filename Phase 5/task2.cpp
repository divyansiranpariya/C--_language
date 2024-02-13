#include <iostream>
using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void range(int start, int end) {
int i;
    for (i = start; i <= end; i++) {

        cout << "Factorial of " << i << " is: " << factorial(i) << endl;
    }
}

int main() {
    int s,e;
    cout << "Enter the starting number: ";
    cin >> s;
    cout << "Enter the ending number: ";
    cin >> e;


    range(s,e);

    return 0;
}

