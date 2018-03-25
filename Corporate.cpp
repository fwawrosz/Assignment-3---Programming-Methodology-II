/*
 * Corporate.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Julien
 */

#include "Corporate.h"            // Include's header file of class 'Corporate'
#include <string>
#include <iostream>               // Preprocessor directive to include input/output stream header file <iostream>.
using namespace std;              // Using std abbreviations

Corporate::Corporate():Customer() // default Constructor
{
	//Initialization of data members
	companyName = "null";
	companyAddress = "null";
}

Corporate::Corporate(int number, string name, string address, string phoneNumber, string companyName, string companyAddress):Customer(number,name,address,phoneNumber,1,35,0) // input given constructor
{
	this->companyName = companyName;
	this->companyAddress = companyAddress;
}

//getters

string const Corporate::getCompanyName()
{
	return companyName;
}

string const Corporate::getCompanyAddress()
{
	return companyAddress;
}

//setters

void Corporate::setCompanyName(string companyName)
{
	this->companyName = companyName;
}

void Corporate::setCompanyAddress(string companyAddress)
{
	this->companyAddress = companyAddress;
}

//print corporate and customer info

void Corporate::print()
{
	cout << "Corporate Info: " << endl;
	cout << "Company Name: " << companyName << endl;
	cout << "Company Address: " << companyAddress << endl;

}




