/*
 * Management.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Julien & Felix
 */

#include <iostream>      // Preprocessor directive to include input/output stream header file <iostream>.
#include <string>
#include "Management.h"       // Include's header file of class 'Management'
#include "Customer.h"         // Include's header file of class 'Customer'
#include "VIP.h"              // Include's header file of class 'VIP'
#include "Corporate.h"        // Include's header file of class 'Corporate'
#include "Regular.h"          // Include's header file of class 'Regular'




using namespace std;         // Using std abbreviations

Management::Management()        // default constructor
{
	//Initialization of data members

	Cars = new Car[20];
	Customers = new Customer[20];
	carCount = 0;
	customerCount = 0;

}

Management::Management(int carCount, int customerCount){              // given input constructor

	Cars = new Car[20];                 // Creates an array of pointers containing 20 spots for cars
	Customers = new Customer[20];       // Creates an array of pointers containing 20 spots for customers. In this program, it is a 1for1, meaning that there is a maximum of 20 rentals and we decided that each customer can only rent 1 car.

	this->carCount=carCount;
	this->customerCount=customerCount;

}


void Management::addCustomer(){               // function used to add a new customer

	int customerType;

	cout << "What type of customer do you want to add: " << endl;
	cout <<"1: Regular" << endl;
	cout <<"2: Corporate" << endl;
	cout <<"3: VIP" << endl;
	cin >> customerType;

	while(0==0){

		int n1;
		string n2;
		string a1;
		string a2;
		if(customerType==1){

			cout << "Please enter new customer info:" << endl;
			cout <<"Customer ID number: " << endl;
			cin >> n1;
			getline(cin,n2);
			cout <<"Customer name: " << endl;
			getline(cin,n2);
			cout <<"Customer address: " << endl;
			getline(cin,a1);
			cout <<"Customer Phone number: " << endl;
			getline(cin,a2);

			cout << "" << endl;

			Customers[customerCount]= Regular(n1, n2, a1, a2);
			customerCount++;
			break;
		}

		if(customerType==2){

			string cc1;
			string ca;

			cout << "Please enter new customer info:" << endl;
			cout <<"Customer ID number: " << endl;
			cin >> n1;
			getline(cin,n2);
			cout <<"Customer name: " << endl;
			getline(cin,n2);
			cout <<"Customer address: " << endl;
			getline(cin,a1);
			cout <<"Customer Phone number: " << endl;
			getline(cin,a2);
			cout <<"Company name: " << endl;
			getline(cin, cc1);
			cout <<"Company address: " << endl;
			getline(cin, ca);

			cout << "" << endl;

			Customers[customerCount]= Corporate(n1, n2, a1, a2, cc1, ca);
			customerCount++;
			break;
		}


		if(customerType==3){

			cout << "Please enter new customer info:" << endl;
			cout <<"Customer ID number: " << endl;
			cin >> n1;
			getline(cin,n2);
			cout <<"Customer name: " << endl;
			getline(cin,n2);
			cout <<"Customer address: " << endl;
			getline(cin,a1);
			cout <<"Customer Phone number: " << endl;
			getline(cin,a2);

			cout << "" << endl;

			Customers[customerCount]= VIP(n1, n2, a1, a2);
			customerCount++;
			break;
		}

		else{
			cout << "Please enter a valid option." << endl;

		}
	}
}

void Management::addCar(){                 // function used to add a new car to the inventory


	if(carCount < 20){

		string Cartype;

		cout <<"Enter car type (Standard or luxury): " << endl;
		cin >> Cartype;

		Cars[carCount] = Car(carCount, Cartype, true);
		carCount++;
	}
	else {
		cout << "We cannot add any more cars. Sorry." << endl;
	}
}

void Management::removeCustomer(int cNumber){                  // function used to remove a customer from the inventory of customers (when someone returns a car)

	for (int i = 0; i < customerCount; i++){
		if (Customers[i].getNumber() == cNumber){
			for (int j = i; j < customerCount-1; j++) {
				Customers[j] = Customers[j+1]; //shifts the elements of the array
			}
		customerCount--;
		return;
		}
	}
}

void Management::removeCar(int caNumber){                       // function used to remove a car from the inventory (return)

	for (int i = 0; i < carCount; i++){
		if (Cars[i].getcarID() == caNumber){
			for (int j = i; j < carCount-1; j++) {
				Cars[j] = Cars[j+1];
			}
		carCount--;
		return;
		}
	}
}

void Management::assignCarToCustomer(int assignCar){              // function used to assign a car to a customer (when a customer rents a car)

	if (Cars[assignCar].getAvailability() == true){
		int customerID;
		cout << "Please enter ID of customer that is renting this car." << endl;
		cin >> customerID;
		Customers[customerID].setRentedCar(assignCar);
	}
	else{
		cout <<"This car is not currently available." << endl;
		for (int assignCar=assignCar; assignCar < 20; assignCar++){
			if (Cars[assignCar].getAvailability() == true){
				int customerID;
				Customers[customerID].setRentedCar(assignCar);
				break;
			}
			else{

			}
	}
}
}

void Management::returnCar(int CARid){                 // function used to set car to available after it is returned

	Cars[CARid].setAvailability(true);

}



void Management::Privileges(int cusID){                // function used to output the privileges of a certain customer depending on his type

	switch(Customers[cusID].getPriv()){

		case 0:
				cout << "This customer can only rent standard cars." << endl;
			break;

		case 1:
				cout <<"This customer can rent standard and luxury cars." << endl;
			break;
	}
}

void Management::ChangePrivileges(int CustomerChange){                 // function that lets you change the privileges of the different type of customers. Incomplete in this program.

	switch(CustomerChange){
		int Rentperiod;
		case 1:
			cout << "Enter new value for rental period (or the same if you no longer want to change it): " << endl;
			cin >> Rentperiod;
			break;

		case 2:

			break;

		case 3:

			break;

		default:
			cout << "Please enter a valid number (1,2 or 3)" << endl;
 	}
}

void Management::carRentedOrNot(int rentedCar){                                        // function that lets the user know if a car is available (not rented) or unavailable (rented)

	if (Cars[rentedCar].getAvailability()==false){
		cout << "Car " << rentedCar << " is available." << endl;
	}
	else{
		cout << "Car " << rentedCar << " is not available." << endl;
	}
}

void Management::whoRentedit(int who){                               // function that lets the user which customer is renting a particular car.

	for(int i = 0; i < customerCount; i++){
		if(Customers[i].getRentC()==who){
			switch(Customers[i].getRentPeriod()){
			case 20:
				cout << "The customer is a regular customer." << endl;
				break;
			case 35:
				cout <<"The customer is a corporate customer." << endl;
				break;
			case 45:
				cout <<"The customer is a VIP customer." << endl;
				break;
			}
		}
		else{
			cout << "The car ID was not found among the customers that have rented." << endl;
		}
	}
}

void CompanyCarTypes(){                          // Function that determines the types of cars rented by a customer of a given company. Incomplete in this program.

}

Management::~Management(){         // destructor

}
