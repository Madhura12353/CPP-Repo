// This is first group project of CIT 120 
// Project Name: GroupProjet1PayRoll 
//Programmer: Madhura Kulkarni 
// Last modified: Sep 23 2016 , 2:28PM  

#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
	int hoursWorked1, hoursWorked2, hoursWorked3, hoursWorked4, hoursWorked5;
	double payRate1, payRate2, payRate3, payRate4, payRate5, totalPay1, totalPay2, totalPay3, totalPay4, totalPay5;


	cout << " \t \t This program creates a nicely formated table\n";
	cout << "\t\t          sample solution by  M. Kulkarni \n\n";

	cout << "\n\n Hours worked employee#1 [Only whole hours will credited ] : ";
	cin >> hoursWorked1;
	cin.ignore(80, '\n' );
	cout << "\n Hourly pay rate for employee #1 [ Not necessarily whole dollars ] : ";
	cin >> payRate1;
	cin.ignore(80, '\n');
	totalPay1 = hoursWorked1 * payRate1;

	cout << " \n\n Hours worked employee#2 [Only whole hours will credited ] : ";
	cin >> hoursWorked2;
	cin.ignore(80, '\n');
	cout << "\n Hourly pay rate for employee #2 [ Not necessarily whole dollars ] : ";
	cin >> payRate2;
	cin.ignore(80, '\n');
	totalPay2 = hoursWorked2 * payRate2;

    cout << "\n\n Hours worked employee#3[Only whole hours will credited ] : ";
	cin >> hoursWorked3;
	cin.ignore(80, '\n');
	cout << "\n Hourly pay rate for employee #3 [ Not necessarily whole dollars ] : ";
	cin >> payRate3;
	cin.ignore(80, '\n');
	totalPay3 = hoursWorked3 * payRate3;


	cout << "\n\n Hours worked employee#4 [Only whole hours will credited ] : ";
	cin >> hoursWorked4;
	cin.ignore(80, '\n');
	cout << "\n Hourly pay rate for employee #4 [ Not necessarily whole dollars ] : ";
	cin >> payRate4;
	cin.ignore(80, '\n');
	totalPay4 = hoursWorked4 * payRate4;

	cout << "\n\n Hours worked employee#5 [Only whole hours will credited] : ";
	cin >> hoursWorked5;
	cin.ignore(80, '\n');
	cout << "\n Hourly pay rate for employee #5 [ Not necessarily whole dollars ] : ";
	cin >> payRate5;
	cin.ignore(80, '\n');
	totalPay5 = hoursWorked5 * payRate5;

	cout << setprecision(5);
	int fieldLength = 2;
	cout << "\n\n\nEmployee#          Hours               Pay Rate                 Total Pay\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(5) <<"1" <<  setw(16)<< hoursWorked1 << setw(fieldLength) <<   setw(20) <<"$  " << setprecision(2) << fixed <<payRate1;
	cout<< setw(fieldLength)<<setw(20) << "$  " << totalPay1 << "\n";

	cout << setw(5) << "2" << setw(16) << hoursWorked2 << setw(fieldLength) << setw(20) << "$  " << payRate2;
	cout << setw(fieldLength) << setw(20) << "$  " << totalPay2 << "\n";

	 cout << setw(5) << "3" << setw(16) << hoursWorked3 << setw(fieldLength) << setw(20) << "$  " << payRate3;
	cout << setw(fieldLength) << setw(20) << "$  " << totalPay3 << "\n";

	cout << setw(5) << "4" << setw(16) << hoursWorked4 << setw(fieldLength) << setw(20) << "$  " << payRate4;
	cout << setw(fieldLength) << setw(20) << "$  " << totalPay4 << "\n";

	cout << setw(5) << "5" << setw(16) << hoursWorked5 << setw(fieldLength) << setw(20) << "$  " << payRate5;
	cout << setw(fieldLength) << setw(20) << "$  " << totalPay5 << "\n";

	cout << setw(5) << "TOTAL/AVERAGE"<<setw(9) << hoursWorked1 + hoursWorked2 + hoursWorked3 + hoursWorked4 + hoursWorked5<<"\n";





	

	system("pause");
	return 0;

}