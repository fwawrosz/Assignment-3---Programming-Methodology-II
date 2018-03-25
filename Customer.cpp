/*
 * Customer.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Julien & Felix
 */

#include "Customer.h"          // Include's header file of class 'Customer'
#include <String>
#include <iostream>           // Preprocessor directive to include input/output stream header file <iostream>.
using namespace std;          // Using std abbreviations


Customer::Customer() // default constructor
{
	//Initialization of data members
	number = 0;
	name = "Null";
	address = "Null";
	phoneNumber = "Null";
	priv = true;
	rentPeriod = 0;
	rentC = 0;
}

Customer::Customer(int number,string name,string address,string phoneNumber, int rentPeriod, bool priv, int rentC) // input given constructor
{
	this->number = number;
	this->name = name;
	this->address = address;
	this->phoneNumber = phoneNumber;
	this->priv = priv;
	this->rentPeriod = rentPeriod;
	this->rentC = rentC;
}

//getters

int const Customer::getNumber()
{
	return number;
}

string const Customer::getName()
{
	return name;
}

string const Customer::getAddress()
{
	return address;
}

string const Customer::getPhoneNumber()
{
	return phoneNumber;
}

bool const Customer::getPriv()
{
	return priv;
}

int const Customer::getRentC(){
	return rentC;
}

int const Customer::getRentPeriod()
{
	return rentPeriod;
}

//setters

void Customer::setNumber(int number)
{
	this->number = number;
}

void Customer::setName(string name)
{
	this->name = name;
}

void Customer::setAddress(string address)
{
	this->address = address;
}

void Customer::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Customer::setPriv(bool priv)
{
	this->priv = priv;
}

void Customer::setRentPeriod(int rentPeriod)
{
	this->rentPeriod = rentPeriod;
}

void Customer::setRentedCar(int rentC)
{
	this->rentC = rentC;
}


//print customer info
void Customer::print()
{
	cout << "Customer Information: " <<endl;
	cout << "Customer Number: " << number << endl;
	cout << "Customer Name: " << name << endl;
	cout << "Customer Address: " << address << endl;
	cout << "Customer Phone Number: " << phoneNumber << endl;
	cout << "Rent Period: " << rentPeriod << endl;
	cout << "Rented car: " << rentC << endl;

}





