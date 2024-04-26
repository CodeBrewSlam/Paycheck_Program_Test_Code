#include <iostream>
#include <string>
using namespace std;

int main()
{
	double grossPay;
	do
	{
		cout << "\nEnter gross pay: ";
		cin >> grossPay;

		if (grossPay < 0)
		{
			cout << "\nEnter a positive number.\n";
		}
	} while (grossPay < 0); // This will ensure loop if input is negative
	
	string payPeriod;

	do 
	{
		cout << "\nEnter pay period abbreviation: ";
		cin >> payPeriod;

		if (payPeriod != "BW" && payPeriod != "SM" && payPeriod != "MN") // We can expand on this to handle lowercase input also
		{
			cout << "\nPlease enter a valid abbreviation.\n\n";
		}

	} while (payPeriod != "BW" && payPeriod != "SM" && payPeriod != "MN"); // Loop if not valid input


	return 0;
}

