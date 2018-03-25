/*
 * TestManager.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Julien
 */

#include <iostream>                  // Preprocessor directive to include input/output stream header file <iostream>.
#include <string>
#include "Management.h"             // Include's header file of class 'Management'
#include "Customer.h"               // Include's header file of class 'Customer'
#include "Regular.h"                // Include's header file of class 'Regular'
#include "Corporate.h"              // Include's header file of class 'Corporate'
#include "VIP.h"                    // Include's header file of class 'VIP'
#include "Car.h"                    // Include's header file of class 'Car'
using namespace std;               // Using std abbreviations


int main(){

	Management* m1;                  // Creation of pointer of class manager to object
	m1 = new Management(0, 0);       // initialization of object of Management

	int choice=13;           // dummy value for choice (not important)

	while (choice !=0){                      // While loop that will keep on outputting Menu to the screen until user enters '0' to exit program
		cout <<"Menu: " << endl;
		cout <<"1: Add new car " << endl;
		cout <<"2: Remove car " << endl;
		cout <<"3: Register new customer" << endl;
		cout <<"4: Remove customer" << endl;
		cout <<"5: Rent a car to a customer" << endl;
		cout <<"6: Return car" << endl;
		cout <<"7: See customer privileges" << endl;
		cout <<"8: Change privileges" << endl;
		cout <<"9: Availability of Car" << endl;
		cout <<"10: Customer car rental" << endl;
		cout <<"11: Customer type" << endl;
		cout <<"12: Type of car rented by customer of a given company" << endl;
		cout <<"0: Exit Program. " << endl;

	cin >> choice;

	// List of actions that will take place depending on input of user (12 options + exit in switch list)
		switch(choice){

		case 1:

			m1->addCar();             // calls member function 'addCar'
			cout << "*****************************************************************************************" << endl;
			break;

		case 2:
			int removeCar;
			cout << "Please enter car ID that you want to remove." << endl;
			cin >> removeCar;
			m1->removeCar(removeCar);          // calls member function 'removeCar' with input of user as argument
			cout << "*****************************************************************************************" << endl;
			break;

		case 3:
			m1->addCustomer();                   // calls member function 'addCustomer'
			cout << "*****************************************************************************************" << endl;
			break;

		case 4:

			int removeCustomer;
			cout <<"Please enter customer ID that you want to remove. " << endl;
			cin >> removeCustomer;
			m1->removeCustomer(removeCustomer);          // calls member function 'removeCustomer' with input of user as argument
			cout << "*****************************************************************************************" << endl;
			break;

		case 5:
			int CARID;
			cout << "Please enter ID of car that you want to rent: " << endl;
			cin >> CARID;
			m1->assignCarToCustomer(CARID);         // calls member function 'assignCarToCustomer' with input of user as argument
			cout << "*****************************************************************************************" << endl;
			break;

		case 6:
			int CARid;
			cout <<"Please enter the ID of the car you are returning: " << endl;
			cin >> CARid;
			m1->returnCar(CARid);          // calls member function 'returnCar' with input of user as argument
			cout << "*****************************************************************************************" << endl;
			break;

		case 7:
			int cussID;
			cout << "Enter ID of customer to see privileges: " << endl;
			cin >> cussID;
			m1->Privileges(cussID);         // calls member function 'Privileges' with input of user as argument
			cout << "*****************************************************************************************" << endl;
			break;   //exit switch

		case 8:
			int answer;
			cout << "For what type of customer do you want to change the privileges?" << endl;
			cout << "1: Regular Customer" << endl;
			cout << "2: Corporate Customer" << endl;
			cout << "3: VIP Customer" << endl;
			cin >> answer;                   // incomplete... Goal was to change the privileges of regular, corporate and VIP customers

			break;     // exit switch

		case 9:
			int rentedOrNotCarID;
			cout <<"Please enter ID of car to see if it is rented or not. " << endl;
			cin >> rentedOrNotCarID;
			m1->carRentedOrNot(rentedOrNotCarID);      // calls member function 'carRentedOrNot' with input of user as argument
			cout << "*****************************************************************************************" << endl;
			break;   // exit switch

		case 10:

			break;    // exit switch

		case 11:
			int whoRentedThisCar;
			cout << "To know what type of customer has rented a certain car, please enter the car ID." << endl;
			cin >> whoRentedThisCar;
			m1->whoRentedit(whoRentedThisCar);              // calls member function 'whoRentedit' with input of user as argument
			cout << "*****************************************************************************************" << endl;
			break;        // exit switch

		case 12:

			break;       // exit switch

		case 0:
			cout <<"Program will be exited." << endl;

			break;       // exit switch, and will exit program when it will go back to while loop

		default:
			cout << "You did not choose one of the options in the menu. Please choose an appropriate option. " << endl;

		}

	}


	delete m1;         // delete object of class Manager to clean and recover memory

	return 0;          // Indication of program ending successfully.
}                      // End function main


