// Chapter1Excercise2W.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    
    double hours, rate, pay;

    cout << "How many hours did you work? ";
    cin >> hours;

    cout << "How much do you get paid per hour? ";
    cin >> rate;

    pay = hours * rate;

    cout << "You have earned $" << pay << endl;
    return 0;



}

