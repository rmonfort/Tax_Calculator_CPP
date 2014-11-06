#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;

// Calculates the amount tax based on the tax percentage and the dollar value
double CalculateTax(const double& taxPercentage, const double& dollarValue)
{
	return dollarValue * taxPercentage / 100;
}

int main()
{
	// Ask user for dollar value and verify input
	cout << "Please enter a dollar value: ";
	double dollarValue;
	cin >> dollarValue;
	while (!cin)
	{
		cout << "You've entered an invalid input.\n" << endl;
		cout << "Please enter a dollar value: ";
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> dollarValue;
	}

	// Asks user for tax percentage and verify input
	cout << "Please enter the current tax percentage: ";
	double taxPercentage;
	cin >> taxPercentage;
	while (!cin)
	{
		cout << "You've entered an invalid input.\n" << endl;
		cout << "Please enter the current tax percentage: ";
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> dollarValue;
	}

	// Output formatted subtotal, tax, and grand total
	cout << fixed << setprecision(2) << "\nSubtotal: $" << dollarValue << endl;
	double tax = CalculateTax(taxPercentage, dollarValue);
	cout << "Tax: $" << tax << endl;
	cout << "-------------------" << endl;
	cout << "Grand Total: $" << dollarValue + tax << endl;
	return 0;
}