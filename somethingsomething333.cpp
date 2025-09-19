// File Name: somethingsomething333.ccp
//Programmer: Charles Duncan
//Date: 9/19/2025
//Requirements: write a program that can be used as a math tutor for a young student. the program should then pause while the student works on the problem. When the student is ready to check the answer, he or she can press a key and the program will display the correct solution

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double annualRate, monthlyRate, loanAmount, monthlyPayment, amountPaidBack, interestPaid;
    int numberOfPayments;

    // Input
    cout << "Enter the loan amount: ";
    cin >> loanAmount;

    cout << "Enter the annual interest rate (in %): ";
    cin >> annualRate;

    cout << "Enter the number of payments: ";
    cin >> numberOfPayments;

    // Convert to monthly rate (as decimal)
    monthlyRate = (annualRate / 100.0) / 12.0;

    // Calculate monthly payment
    monthlyPayment = (monthlyRate * pow(1 + monthlyRate, numberOfPayments)) /
                     (pow(1 + monthlyRate, numberOfPayments) - 1) * loanAmount;

    // Totals
    amountPaidBack = monthlyPayment * numberOfPayments;
    interestPaid = amountPaidBack - loanAmount;

    // Output
    cout << fixed << setprecision(2);
    cout << "\nLoan Amount: $" << loanAmount << endl;
    cout << "Monthly Interest Rate: " << (monthlyRate * 100) << "%" << endl;
    cout << "Number of Payments: " << numberOfPayments << endl;
    cout << "Monthly Payment: $" << monthlyPayment << endl;
    cout << "Amount Paid Back: $" << amountPaidBack << endl;
    cout << "Interest Paid: $" << interestPaid << endl;

    return 0;
}
