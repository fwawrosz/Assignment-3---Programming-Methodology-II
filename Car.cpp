/*
 * Car.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Julien & Felix
 */

#include "Car.h"                          // Include's header file of class 'Car'
#include <string>
#include <iostream>                       // Preprocessor directive to include input/output stream header file <iostream>.
using namespace std;                      // Using std abbreviations

Car::Car() // default constructor
{
	//Initialization of data members

	id = 0;
	type = "null";
	availability = false;
}

Car::Car(int id,string type,bool availability) // input given Constructor
{
	this->id = id;
	this->type = type;
	this->availability = availability;
}


//getters

int const Car::getcarID()
{
	return id;
}

string const Car::getType()
{
	return type;
}

bool const Car::getAvailability()
{
	return availability;
}

//setters

void Car::setID(int id)
{
	this->id = id;
}

void Car::setType(string type)
{
	this->type = type;
}

void Car::setAvailability(bool)
{
	this->availability = availability;
}

//print info of car

void Car::print()
{
	cout << "Car Information: " << endl;
	cout << "ID: " << id << endl;
	cout << "Car Type: " << type << endl;
	if(availability)
		cout << "Availability: Available " << endl;
	else
		cout << "Availability: Not Available" << endl;

}









