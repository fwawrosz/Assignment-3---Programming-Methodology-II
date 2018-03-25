/*
 * Corporate.h
 *
 *  Created on: Mar 2, 2018
 *      Author: Julien
 */

#ifndef CORPORATE_H_
#define CORPORATE_H_

#include <iostream>                     // Preprocessor directive to include input/output stream header file <iostream>.
#include <string>
#include "Customer.h"                   // Include's header file of class 'Customer'
using namespace std;                    // Using std abbreviations

class Corporate: public Customer {       // Corporate abstract data type definition (with public access to class 'customer')

private:

	//Data members

	string companyName;
	string companyAddress;

public:

	// Member Functions

	Corporate();           // default constructor
	Corporate(int, string, string, string, string, string);

	string const getCompanyName();
	string const getCompanyAddress();

	string getType();
	void setCompanyName(string);
	void setCompanyAddress(string);

	void print();

};



#endif /* CORPORATE_H_ */
