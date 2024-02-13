#include <iostream>
using namespace std;

void generateMultiplicationTables(int n1, int n2) {
    if (n1 > n2) {
        cout << "Invalid range. Please provide n1 <= n2." << endl;
        return;
    }

    for (int i = n1; i <= n2; ++i) {
        cout << "Multiplication table for " << i << ":" << endl;
        for (int j = 1; j <= 10; ++j) {
            cout << i << " * " << j << " = " << (i * j) << endl;
        }
        cout << endl;
    }
}

int main() {
    int n1, n2;

    cout << "Enter the range for multiplication tables (n1 and n2): ";
    cin >> n1 >> n2;

    generateMultiplicationTables(n1, n2);

    return 0;
}

