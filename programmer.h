/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/27/2020
 ******************************************************************************/

#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include "employee.h"

class Programmer: public Employee
{
	public:
	/***************************
	****CONSTRUCTOR/DESTRUCTOR**
	****************************/
	Programmer();  //DEFAULT CONSTRUCTOR
	~Programmer(); //DEFAULT DESTRUCTOR

	/******************
	**** MUTATORS *****
	******************/
	void SetInitial(string eName, int dNumber, string sName, int pInc,
			        string cIdn, string javId);
	void ChangeDepartmentNum(int dNum); //changes the employee's department #
	void ChangeSupervisorName(string sName); //changes the supervisors name
	void ChangePercentInc(int pInc); //changes the employee's salary % inc
	void ChangeCppIdentifier(string cIden); //status of C++ knowledge
	void ChangeJavaIdentifier(string jIden); //status of Java knowledge

	/******************
	**** ACCESSORS ****
	******************/
	void DisplayTable() const; // Will display table
	void Display() const; // Will display employee information

	private:
	int departNumber;      // - sets employee's department name
	string supervisorName; // - sets employee's supervisors name
	int percentInc;        // - sets employee's percent increase
	string cppIden;          // - sets employee's c++ knowledge
	string javaIden;         // - sets employee's java knowledge

};

#endif /* PROGRAMMER_H_ */
