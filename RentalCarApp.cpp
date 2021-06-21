// RentalCarApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>



using std::string;
using std::cout;
using std::cin;
using std::endl;


 
int main()
{
   string role;
   int user_level = 9;

   cout << "Hello, and welcome to your rental car service.\n"<<endl;
   Sleep(2000);
   cout << "Are you a Customer, Associate, or Manager?\n" << endl;
  
   while (user_level == 9) {
	   cin >> role;
	   if (role == "Customer" || "customer" || "CUSTOMER") {
		   user_level = 0;
		   break;
	   }
	   else if (role == "Associate" || "associate" || "ASSOCIATE") {
		   user_level = 1;
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



}

