/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/27/2020
 ******************************************************************************/

#ifndef SOFTWAREARCHITECT_H_
#define SOFTWAREARCHITECT_H_

#include "employee.h"

class SoftwareArchitect: public Employee
{
	public:
	/***************************
	****CONSTRUCTOR/DESTRUCTOR**
	****************************/
	SoftwareArchitect();  //DEFAULT CONSTRUCTOR
	~SoftwareArchitect(); //DEFAULT DESTRUCTOR

	/******************
	**** MUTATORS *****
	******************/
	void SetInitial(string eName, int dNum, string sName, int sPer,
			        int nExp); //sets the employee's value
	void ChangeDepartNum(int dNum); // changes department name
	void ChangeSuperName(string sName); // changes supervisors name
	void ChangeSalPer(int sPer); //changes salary percent raise
	void ChangeNumExp(int nExp); //changes employees's years of experience
	/******************
	**** ACCESSORS ****
	******************/
	void DisplayTable() const; // Will display table heading
	void Display() const; // Will display employee information

	private:
	int departmentNumber;  // - sets employee's department name
	string supervisorName; // - sets employee's supervisors name
	int salaryPercentInc;  // - sets the salary % increase
	int numExp;            // - sets the number of experience
};

#endif /* SOFTWAREARCHITECT_H_ */
