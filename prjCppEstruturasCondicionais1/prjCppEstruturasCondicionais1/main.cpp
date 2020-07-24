#include<iostream>

using namespace std;

void main() {

	int val1, val2;
	char selectOperator;

	cout << "\tCALCULATOR" << endl;
	cout << "\t___________\n" << endl;
	cout << "Enter value 1: ";
	cin >> val1;
	cout << "Enter value 2: ";
	cin >> val2;
	cout << "Select the operator(+,-,/,*,%): ";
	cin >> selectOperator;

	if (selectOperator == '+')
	{
		cout << "\nThe Result of the addition of " << val1 << " and " << val2 << " is " << (val1 + val2) << endl;
	}
	else if (selectOperator == '-')
	{
		cout << "\nThe Result of the subtraction of " << val1 << " and " << val2 << " is " << (val1 - val2) << endl;
	}
	else if (selectOperator == '/')
	{
		cout << "\nThe Result of the division of " << val1 << " and " << val2 << " is " << (val1 / val2) << endl;
	}
	else if (selectOperator == '*')
	{
		cout << "\nThe Result of the multiplication of " << val1 << " and " << val2 << " is " << (val1 * val2) << endl;
	}
	else if (selectOperator == '%')
	{
		cout << "\nThe Result of the modulo of " << val1 << " and " << val2 << " is " << (val1 % val2) << endl;
	}
	else
	{
		cout << "\nInvalid operator." << endl;
	}










}