/*
 * VIP.h
 *
 *  Created on: Mar 2, 2018
 *      Author: Julien
 */

#ifndef VIP_H_
#define VIP_H_

#include <iostream>                  // Preprocessor directive to include input/output stream header file <iostream>.
#include <string>
#include "Customer.h"                // Include's header file of class 'Customer'
using namespace std;                 // Using std abbreviations

class VIP: public Customer {             // VIP abstract data type definition (public to class 'customer')

private:

	//Data members (none in this case)

public:

	// Member Functions

	VIP();             // default constructor
	VIP(int, string, string, string);   // input given constructor

	string getType();
	void print();
};



#endif /* VIP_H_ */
