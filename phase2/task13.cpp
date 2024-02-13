#include<iostream>
#include<cmath>
using namespace std;

class EMI {
private:
    double amount;
    double rate;
    int time;

public:
    EMI(double principal, double interestRate, int termMonths) {
        amount = principal;
        rate = interestRate;
        time = termMonths;
    }

    double calculate() {
        double monthlyRate = rate / (12 * 100);
        double monthlyPayment = (amount * monthlyRate) / (1 - pow(1 + monthlyRate, -time));
        return monthlyPayment;
    }
};

int main() {
    double principal, interestRate;
    int termMonths;

    cout << "Enter principal amount:";
    cin >> principal;

    cout << "Enter annual interest rate:";
    cin >> interestRate;

    cout << "Enter loan term in months:";
    cin >> termMonths;

    EMI e1(principal, interestRate, termMonths);

    double monthlyEMI = e1.calculate();

    cout << "Your monthly EMI for the car would be:" << monthlyEMI << endl;

    return 0;
}

