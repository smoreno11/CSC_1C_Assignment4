/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/27/2020
 ******************************************************************************/

#include "softwareTester.h"
#include <iomanip>
#include <iostream>
SoftwareTester::SoftwareTester()
{

}

SoftwareTester::~SoftwareTester()
{

}

void SoftwareTester::Address(SoftwareTester *tPtr, string add, string cit,
		                                           string st, string zp)
{
	tPtr->address = add;
	tPtr->city = cit;
	tPtr->state = st;
	tPtr->zip   = zp;
	cout << std::left;
	std::cout << std::setw(ADD_SIZE)<< tPtr->address;
	std::cout << std::setw(CITY_SIZE)<< tPtr->city;
	std::cout << std::setw(ST_SIZE)<< tPtr->state;
	std::cout << tPtr->zip;
	cout << std::right;
}

void SoftwareTester::DeepCopy(SoftwareTester otherTester)
{
	address = otherTester.address;
	city    = otherTester.city;
	state   = otherTester.state;
	zip     = otherTester.zip;
}

void SoftwareTester::CopyCons(const SoftwareTester &otherTester)
{
	address = otherTester.address;
	city    = otherTester.city;
	state   = otherTester.state;
	zip     = otherTester.zip;
}

void SoftwareTester::Display() const
{
	cout << std::left;
	std::cout << std::setw(ADD_SIZE)<< "Address";
	std::cout << std::setw(CITY_SIZE)<< "City";
	std::cout << std::setw(ST_SIZE)<< "State";
	std::cout << "Zip Code";
	cout << std::right;
}
