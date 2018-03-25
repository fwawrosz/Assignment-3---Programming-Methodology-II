/*
 * Regular.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Julien
 */

#include "Regular.h"                   // Include's header file of class 'Regular'
#include "Customer.h"                  // Include's header file of class 'Customer'
#include "Car.h"                       // Include's header file of class 'Car'
#include <string>
#include <iostream>                     // Preprocessor directive to include input/output stream header file <iostream>.
using namespace std;                    // Using std abbreviations

// default constructor

Regular::Regular():Customer(){}

//input given constructor

Regular::Regular(int number, string name, string address, string phoneNumber):Customer(number,name,address, phoneNumber, 20, 0, 0){

}

//print regular customer info

void Regular::print()
{
Customer::print();
}




