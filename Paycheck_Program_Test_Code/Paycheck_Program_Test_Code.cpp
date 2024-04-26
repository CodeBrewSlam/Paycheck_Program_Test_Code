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
	} while (grossPay < 0);
	
	string payPeriod;

	do 
	{
		cout << "\nEnter pay period abbreviation: ";
		cin >> payPeriod;

		if (payPeriod != "BW" && payPeriod != "SM" && payPeriod != "MN")
		{
			cout << "\nPlease enter a valid abbreviation.\n\n";
		}

	} while (payPeriod != "BW" && payPeriod != "SM" && payPeriod != "MN");


	return 0;
}

