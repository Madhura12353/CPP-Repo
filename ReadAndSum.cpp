// Read and Sum of two integers
// Project Name: ReadAndSum
// Programmer: Madhura Kulkarni
// Last Modified Date and Time: Sep 21th 2016, 10:28pm

#include<iostream>
using namespace std;
int main()
{
	system("color E0");

	cout <<"\t\t\t Two numbers added \n";
	cout<<"\t\t\t by Madhura\n\n";
	
	int integer1, integer2,sum;
	cout << "Please give me an INTEGER: \n\n";
	cin >> integer1;
	cin.clear();
	cin.ignore(10,'\n');

	cout << "You entered " << integer1 <<"\n\n";
	cout << "Please give me an anather INTEGER \n";
	cin >> integer2;
	cout << "You entered " << integer2 << "\n\n";

	sum = integer1 + integer2;
	cout << "The sum of " << integer1 << " ";
	cout<< "and " << integer2<<" " << "is " << sum << "\n\n";

	system("pause");


}
