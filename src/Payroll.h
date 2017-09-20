#ifndef _PAYROLL_H
#define _PAYROLL_H

double getRegularHours(double totalHours);
double getOvertimeHours(double totalHours);
double getGrossPay(double regularHours, double overtimeHours, double hourlyRate);
double getGrossPay(double salary);
double getFIT(double grossPay);
double getFICASSN(double grossPay);
double getFICAMED(double grossPay);
double getNetPay(double grossPay, double fedincome, double ficaSSN, double ficaMedicare);
void printCheck(double grossPay,  double regularHours, double overtimeHours, double fedincome, double ficaSSN, double ficaMedicare, double netPay);


#endif
