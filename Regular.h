/*
 * Regular.h
 *
 *  Created on: Mar 2, 2018
 *      Author: Julien & Felix
 */

#ifndef REGULAR_H_
#define REGULAR_H_

#include <iostream>                // Preprocessor directive to include input/output stream header file <iostream>.
#include <string>
#include "Customer.h"              // Include's header file of class 'Customer'
#include "Car.h"                   // Include's header file of class 'Car'
using namespace std;

class Regular: public Customer {           // Regular abstract data type definition (with public access to class 'customer')


private:

//Data members (none in this class)

public:

	// Member Functions

	Regular();           // default constructor
	Regular(int, string, string, string);      // input given constructor
	string getType();
	void print();

};



#endif /* REGULAR_H_ */
