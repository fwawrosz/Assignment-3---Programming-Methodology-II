/*
 * Management.h
 *
 *  Created on: Mar 2, 2018
 *      Author: Julien
 */

#ifndef MANAGEMENT_H_
#define MANAGEMENT_H_

#include <iostream>              // Preprocessor directive to include input/output stream header file <iostream>.
#include <string>
#include "Customer.h"            // Include's header file of class 'Customer'
#include "Car.h"                 // Include's header file of class 'Car'
using namespace std;             // Using std abbreviations

class Management: public Customer, Car {            // Management abstract data type definition (with public access to class 'customer'and 'car')

private:

	//Data members

	Car* Cars;                           // Pointer of class car
	Customer* Customers;                 // Pointer of class customer
	int carCount;                        // variable that will be used to keep track of the amount of cars in the inventory
	int customerCount;                   // variable that will be used to keep track of the amount of customers


public:

	// Member Functions

	Management();                      // Default Constructor
	Management(int, int);              // input given constructor
	void addCustomer();
	void removeCustomer(int);
	void addCar();
	void removeCar(int);
	void assignCarToCustomer(int);
	void returnCar(int);
	void Privileges(int);
	void carRentedOrNot(int);
	void whoRentedit(int);
	void ChangePrivileges(int);
	void CompanyCarTypes();
	~Management();                    // destructor

};


#endif /* MANAGEMENT_H_ */
