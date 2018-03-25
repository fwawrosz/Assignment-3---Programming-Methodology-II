/*
 * Customer.h
 *
 *  Created on: Mar 2, 2018
 *      Author: Julien
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <iostream>         // Preprocessor directive to include input/output stream header file <iostream>.
#include <string>
using namespace std;

class Customer {          // Customer abstract data type definition

private:

	//Data members

	int number;
	string name;
	string address;
	string phoneNumber;
	int rentC;
	bool priv;
	int rentPeriod;

public:

	// Member Functions

	Customer();                                     // Default constructor
	Customer(int, string, string, string, int, bool, int);    // input given constructor
	Customer(const Customer&);           // copy constructor

	int const getNumber();
	string const getName();
	string const getAddress();
	string const getPhoneNumber();
	bool const getPriv();
	int const getRentPeriod();
	int const getRentC();

	void setNumber(int);
	void setName(string);
	void setAddress(string);
	void setPhoneNumber(string);
	void setPriv(bool);
	void setRentPeriod(int);
	void setRentedCar(int);
	void print();


};




#endif /* CUSTOMER_H_ */
