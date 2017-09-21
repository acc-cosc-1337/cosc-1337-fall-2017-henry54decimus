#include <iostream>
#include <iomanip>
#include "Payroll.h"

using namespace std;

const double standard_hours = 40.0;
const double overtime_multi = 1.5;
const double fica_ssnrate = .062;
const double fica_medrate = .0145;
const double fit_rate = .15;
const double salary_biweekly = 26;

/**
Returns regular hours worked in one week
*/
double getOvertimeHours(double totalHours)
{
	double hours = 0;

	if (totalHours > standard_hours)
		hours = totalHours - standard_hours;

	return hours;
}

/*
Calculates gross pay

*/
double getGrossPay(double regularHours, double overtimeHours, double hourlyRate)
{
	double grossPay = 0;

	grossPay = regularHours * hourlyRate;
	grossPay += overtimeHours * hourlyRate * overtime_multi;

	return grossPay;
}

double getGrossPay(double salary)
{
	return salary / salary_biweekly;
}

double getFIT(double grossPay)
{
	double fedincome=0;
	fedincome += grossPay*fit_rate;

	return fedincome;
}

double getFICASSN(double grossPay)
{
	double ficaSSN = 0;
	ficaSSN += grossPay*fica_ssnrate;
	return ficaSSN;
}

double getFICAMED(double grossPay)
{
	double ficaMedicare = 0;
	ficaMedicare += grossPay*fica_medrate;
	return ficaMedicare;
}

double getNetPay(double grossPay, double fedincome, double ficaSSN, double ficaMedicare)
{
	double netPay = 0;
	netPay += grossPay - (fedincome+ficaSSN+ficaMedicare);
		return netPay;
}

void printCheck(double grossPay, double regularHours, double overtimeHours, double fedincome, double ficaSSN, double ficaMedicare, double netPay)
{
	cout << "\n\n" << showpoint << fixed << setprecision(2);
	cout << right << setw(16) << "Regular hours: " << setw(8) << regularHours << endl;
	cout << right << setw(16) << "Overtime hours: " << setw(8) << overtimeHours << endl;
	cout << right << setw(16) << "Gross pay: " << setw(8) << grossPay << endl;
	cout << right << setw(16) << "FIT: " << setw(8) << fedincome << endl;
	cout << right << setw(16) << "FICA SSN: " << setw(8) << ficaSSN << endl;
	cout << right << setw(16) << "FICA Med: " << setw(8) << ficaMedicare << endl;
	cout << right << setw(16) << "Net Pay: " << setw(8) << netPay << endl;


}

