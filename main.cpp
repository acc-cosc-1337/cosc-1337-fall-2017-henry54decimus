#include <iostream>
#include "Payroll.h"
using namespace std;


int main()
{
	enum employeeCategory { hourly = 104, salary = 115 };

	double totalHours = 0, hourlyRate = 0, grossPay, regularHours = 0, overtimeHours = 0, fedincome=0, ficaSSN=0, ficaMedicare=0, netPay=0;
	char c;

	cout << "Enter employee category h or s: ";
	cin >> c;

	while (c != 'h' && c != 's')
	{
		cout << "Characters must be h or s only, please reenter: \n" << endl;
		cout << "Enter employee category h or s: ";
		cin >> c;
	} 

	if (int(c) == hourly)
	{
		cout << "Enter total hours worked: ";
		cin >> totalHours;
		while (!(totalHours > 0 && totalHours < 60))
		{
			cout << "Enter total hours worked: ";
			cin >> totalHours;
		}

		cout << "Enter hourly rate: ";
		cin >> hourlyRate;

		while (!(hourlyRate > 0 && hourlyRate <50))
		{
			cout << "Enter hourly rate: ";
			cin >> hourlyRate;
		}

		regularHours = getRegularHours(totalHours);
		overtimeHours = getOvertimeHours(totalHours);
		grossPay = getGrossPay(regularHours, overtimeHours, hourlyRate);
	}
	else if (int(c) == salary)
	{
		double salary;
		cout << "Enter yearly salary: ";
		cin >> salary;

		while (!(salary >= 20000 && salary <= 100000))
		{
			cout << "Enter yearly salary: ";
			cin >> salary;
		}

		grossPay = getGrossPay(salary);
	}

	fedincome= getFIT(grossPay);
	ficaSSN = getFICASSN(grossPay);
	ficaMedicare = getFICAMED(grossPay);
	netPay = getNetPay(grossPay,fedincome, ficaSSN, ficaMedicare);

	printCheck(grossPay, regularHours, overtimeHours, fedincome, ficaSSN, ficaMedicare, netPay);

	return 0;
}
