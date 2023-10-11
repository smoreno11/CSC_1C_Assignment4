/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/27/2020
 ******************************************************************************/

#ifndef SOFTWARETESTER_H_
#define SOFTWARETESTER_H_

#include "employee.h"

class SoftwareTester: public Employee
{
	public:
	/***************************
	****CONSTRUCTOR/DESTRUCTOR**
	****************************/
	SoftwareTester();  //DEFAULT CONSTRUCTOR
	~SoftwareTester(); //DEFAULT DESTRUCTOR
	void Address(SoftwareTester *tPtr, string add, string cit,
						               string st, string zp);
	void DeepCopy(SoftwareTester otherTester);// deep copy operation
	void CopyCons(const SoftwareTester &otherTester); // copy constructor
	void Display() const; // Will display employee information


	/******************
	**** MUTATORS *****
	******************/
	private:
	char *addressPtr;   // Pointer that points to the address of the employee
	char *cityPtr;      // Pointer that points to the city of the employee
	char *statePtr;     // Pointer that points to the state of the employee
	char *zipPtr;       // Pointer that points to the zip code of the employee
	string address;     // String that holds the
	string city;	    // String that holds the
	string state;       // String that holds the
	string zip;         // String that holds the
	const int ADD_SIZE  = 21;  //Column size for the address
	const int CITY_SIZE = 16;  //Column size for the city
	const int ST_SIZE   = 6;   //Column size for the state

};



#endif /* SOFTWARETESTER_H_ */
