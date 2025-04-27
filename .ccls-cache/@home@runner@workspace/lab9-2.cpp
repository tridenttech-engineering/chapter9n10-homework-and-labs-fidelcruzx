//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Fidel Cruz> on <4/26/25>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


double getPayment(int principal, double monthRate, int months);

int main()
{
    int carPrice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int loanTerm = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;

    cout << "Car price + trade in: $  ";
    cin >> carPrice;
    cout << "Rebate: $  ";
    cin >> rebate;
    cout << "Credit interest rate: ";
    cin >> creditRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Years of loan term: ";
    cin >> loanTerm;


    creditPayment = getPayment (carPrice - rebate, creditRate / 12, loanTerm * 12);
    dealerPayment = getPayment (carPrice, dealerRate / 12, loanTerm * 12);
    
    cout << "Credit payment: $" << creditPayment << endl;
    cout << "Dealer payment: $" << dealerPayment << endl;
   

    return 0;
}//end of main function    

double getPayment(int principal, double monthRate, int months)

{
    double monthPay = 0.0;
    monthPay = principal * monthRate / (1 - pow(monthRate + 1, -months));
    return monthPay;
    
}