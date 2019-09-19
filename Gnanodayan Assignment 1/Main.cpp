#include <iostream>
using namespace std;

//Arathi Gnanodayan's program to calculate the bills withdrawn
int main()
{
	// variables
	int amount;
	int fiftyamount;
	int twentyamount;
	int tenamount;
	int fiveamount;
	int oneamount;
	int response = 1; 

	// initial greeting
	cout << "Hello! Please enter an amount you would like to withdraw." << endl;
	cin >> amount;

	// do while loop is used to calculate the number of bills
	do {
		

		while (amount < 1)
		{
			cout << "Sorry, the min amount to withdraw is 1$. Please enter another amount." << endl;
			cin >> amount;

		}
		while (amount > 300)
		{
			cout << "Sorry, the max amount to withdraw is $300. Please enter another amount." << endl;
			cin >> amount;

		}
		while (amount >= 50) //if the withdraw amount is greater than or equal to $50
		{
			fiftyamount = amount / 50;
			twentyamount = (amount % 50) / 20;
			tenamount = ((amount % 50) % 20) / 10;
			fiveamount = (((amount % 50) % 20) % 10) / 5;
			oneamount = ((((amount % 50) % 20) % 10) % 5);
			if (fiftyamount != 0)
			{
				cout << "You have " << fiftyamount << " $50 bills" << endl;
			}
			if (twentyamount != 0)
			{
				cout << "You have " << twentyamount << " $20 bills" << endl;
			}
			if (tenamount != 0)
			{
				cout << "You have " << tenamount << " $10 bills" << endl;
			}
			if (fiveamount != 0)
			{
				cout << "You have " << fiveamount << " $5 bills" << endl;
			}
			if (oneamount != 0)
			{
				cout << "You have " << oneamount << " $1 bills" << endl;
			}
			cout << "Would you like to make another withdrawal? If yes, please enter 1. If not, please enter 0." << endl;
			cin >> response;
			if (response == 0) // if statement determines what each response creates
			{
				return 0;
			}
			else
			{
				cout << "Please enter another amount to withdraw." << endl;
				cin >> amount;
			}
	
		}
		while (amount >= 20 & amount < 50) // if the withdraw amount is between $20 and $50
		{
			twentyamount = amount / 20;
			tenamount = (amount % 20) / 10;
			fiveamount = ((amount % 20) % 10) / 5;
			oneamount = ((((amount % 20) % 10) % 5));
			if (twentyamount != 0)
			{
				cout << "You have " << twentyamount << " $20 bills" << endl;
			}
			if (tenamount != 0)
			{
				cout << "You have " << tenamount << " $10 bills" << endl;
			}
			if (fiveamount != 0)
			{
				cout << "You have " << fiveamount << " $5 bills" << endl;
			}
			if (oneamount != 0)
			{
				cout << "You have " << oneamount << " $1 bills" << endl;
			}
			cout << "Would you like to make another withdrawal? If yes, please enter 1. If not, please enter 0." << endl;
			cin >> response;
			if (response == 0)
			{
				return 0;
			}
			else
			{
				cout << "Please enter another amount to withdraw." << endl;
				cin >> amount;
			}
			
		}
		while (amount >= 10 & amount < 20) // if the withdraw amount is between $10 and $20
		{
			tenamount = amount / 10; 
			fiveamount = (amount % 10) / 5;
			oneamount = ((amount % 10) % 5);
			if (tenamount != 0)
			{ 
				cout << "You have " << tenamount << " $10 bills" << endl;
			}
			if (fiveamount != 0)
			{
				cout << "You have " << fiveamount << " $5 bills" << endl;
			}
			if (oneamount != 0)
			{
				cout << "You have " << oneamount << " $1 bills" << endl;
			}
			cout << "Would you like to make another withdrawal? If yes, please enter 1. If not, please enter 0." << endl;
			cin >> response;
			if (response == 0)
			{
				return 0;
			}
			else
			{
				cout << "Please enter another amount to withdraw." << endl;
				cin >> amount;
			}
			
		}
		while (amount >= 5 & amount < 10) // if the withdraw amount is between $5 and $10
		{
			fiveamount = amount / 5;
			oneamount = (amount % 5);
			if (fiveamount != 0)
			{
				cout << "You have " << fiveamount << " $5 bills" << endl;
			}
			if (oneamount != 0)
			{
				cout << "You have " << oneamount << " $1 bills" << endl;
			}
			cout << "Would you like to make another withdrawal? If yes, please enter 1. If not, please enter 0." << endl;
			cin >> response;	
			if (response == 0)
			{
				return 0;
			}
			else
			{
				cout << "Please enter another amount to withdraw." << endl;
				cin >> amount;
			}
			
		}
		while (amount < 5 & amount > 0) // if the withdraw amount is between $1 and $5
		{
			oneamount = amount % 5;
			cout << "You have " << oneamount << " $1 bills" << endl;
			cout << "Would you like to make another withdrawal? If yes, please enter 1. If not, please enter 0." << endl;
			cin >> response;
			if (response == 0)
			{
				return 0;
			}
			else
			{
				cout << "Please enter another amount to withdraw." << endl;
				cin >> amount;
			}

			while (response == 0
				)
			{
				break;
			}
		}
	} while (response == 1); // end of do while loop
	
		
	return 0;

}


