// RentalCarApp.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <windows.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int rentOrReturn;
int managerNum;
int inventory_choice;

void customer() { // function for use if the customer profile is selected
	bool customer_auth = false;
	cout << "would you like to rent or return a car? \n (Input 1 for rent | Input 2 for return)" << endl;
	while (customer_auth = false) {
		cin >> rentOrReturn;
		if (rentOrReturn == 1) {
			break;
		}
		else if (rentOrReturn == 2) {
			break;
		}
		else {
			cout << "Invalid Response, Please Try Again." << endl;
		}

	}

}

void manager() {// function for use if the associate profile is selected
	bool manager_Auth = false;
	bool inventoryViewOrEdit = false;
	int inventory_choice;
	cout << "What is your Manager #?" << endl;
	while (manager_Auth = false) { // loop asking for Manager ID number, ideally there would be multiple, in this project scenario there will be one.
		cin >> managerNum;
		if (managerNum == 8888) {
			cout << "Successful Authentication, Thank you." << endl;
			manager_Auth = true;
		}
		else {
			cout << "Incorrect Number, Please Try Again." << endl;
		}
	}

	cout << "Would you like to view inventory or Edit?\n (Input 1 for view | Input 2 for edit)" << endl;
	while (inventoryViewOrEdit = false) {
		cin >> inventory_choice;
		if (inventory_choice == 1) {
			break;
		}
		else if (inventory_choice == 2) {
			break;
		}
		else {
			cout << "Invalid Response, Please Try Again." << endl;
		}
	}
}



int main()
{
   string role;
   int user_level = 9;


   cout << "Hello, and welcome to your rental car service.\n"<<endl;
   Sleep(2000);
   cout << "Are you a Customer, Associate, or Manager?\n" << endl;
  
   while (user_level == 9) { //loop that is 
	   cin >> role;
	   if (role == "Customer" || "customer" || "CUSTOMER") {
		   user_level = 0;
		   break;
	   }
	   else if (role == "Manager" || "manager" || "MANAGER") {
		   user_level = 2;
		   break;
	   }
	   else {
		   cout << "Invalid Input.\n" << endl;
		   cout << "Are you a Customer, Associate, or Manager?\n" << endl;
	   }
   }

   if (user_level == 0) {
	   customer();
   }
   else if (user_level == 2) {
	   manager();

   }


}

