/*
 * Car.h
 *
 *  Created on: Mar 2, 2018
 *      Author: Julien & Felix
 */

#ifndef CAR_H_
#define CAR_H_

#include <iostream>
#include <string>
using namespace std;

class Car {                // Car abstract data type definition

private:

	int id;
	string type;
	bool availability;     // true = available, false = unavailable

public:

	Car();                       // default constructor
	Car(int, string, bool);      // input given constructor
	Car(const Car&);             // copy constructor

	int const getcarID();
	string const getType();
	bool const getAvailability();

	void setID(int);
	void setType(string);
	void setAvailability(bool);

	void print();

};




#endif /* CAR_H_ */
