//****************************************************************************//
//This is the program I wrote for the "Average Rainfall" problem in Chapter 3.//
//                             ComSci 1436                                    //
//****************************************************************************//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//define function "confirmMonth"
void confirmMonth(string month, string array[]);

int main()
{
	//Array of common month formats
	string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	//declare months
	string month1;
	string month2;
	string month3;

	//declare rainfall
	double rain1;
	double rain2;
	double rain3;

	//get first month and rainfall for first month
	cout << "Enter month: ";
	cin >> month1;
	confirmMonth(month1, months);
	cin >> rain1;

	//get second month and rainfall for second month
	cout << "Enter month: ";
	cin >> month2;
	confirmMonth(month2, months);
	cin >> rain2;


	//get third month and rainfall for third month
	cout << "Enter month: ";
	cin >> month3;
	confirmMonth(month3, months);
	cin >> rain3;
	
	//print the average rainfall for the three months, rounded to the nearest hundredth
	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << setprecision(2) << fixed << (rain1 + rain2 + rain3) / 3 << " inches." << endl;
	return 0;
}



//this function will compare user input to an array to insure correct formatting of the months.
void confirmMonth(string month, string array[])
{
	//this flag is used as a mark point to indicate that user input is successful
	int	flag = 0;

	//iterate through array till user input found
	for (int i = 0; i < 24; i++)
	{
		if (month == array[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		cout << "Enter rainfall for " << month << ": ";
	}
	else
	{
		cout << "Please enter correct month format. (i.e. Jan or January)" << endl;
	}
}
