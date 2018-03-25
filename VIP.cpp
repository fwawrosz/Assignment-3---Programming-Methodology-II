/*
 * VIP.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Julien
 */

#include <string>
#include "VIP.h"                           // Include's header file of class 'VIP'
#include <iostream>                        // Preprocessor directive to include input/output stream header file <iostream>.
using namespace std;                       // Using std abbreviations

//default constructor
VIP::VIP():Customer(){

}

//input given construtor

VIP::VIP(int number, string name, string address, string phoneNumber):Customer(number,name,address,phoneNumber, 45,1, 0){

}


//print
void VIP::print()
{
	Customer::print();
}




