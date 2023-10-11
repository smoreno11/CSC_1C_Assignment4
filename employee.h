/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/27/2020
 ******************************************************************************/

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "header.h"

class Employee
{
	public:
	/***************************
	****CONSTRUCTOR/DESTRUCTOR**
	****************************/
	Employee();  //DEFAULT CONSTRUCTOR
	~Employee(); //DEFAULT DESTRUCTOR

	/******************
	**** MUTATORS *****
	******************/
	void SetInitial(string eName, int eId, string ePhone, int eAge,
			        char eGender, string eTitle, double eSalary, string eHire);
	void ChangeEmployeesName(string eName); //changes the employee's name
	void ChangeEmployeesId(int eId); //changes the employee's id
	void ChangeEmployeesPhone(string ePhone); //changes the employee's phone #
	void ChangeEmployeesAge(int eAge); //changes the employee's age
	void ChangeEmployeesGender(char eGender); //changes the gender
	void ChangeEmployeesJobTitle(string eTitle); //changes the employee's job
	                                           // title
	void ChangeEmployeesSalary(double eSalary); //changes the employee's salary
	void ChangeEmployeesHireDate(string eHire); //changes the employee's hire
	                                            // date

	/******************
	**** ACCESSORS ****
	******************/
	void DisplayTable() const; // Will display table
	void Display() const; // Will display employee information

	protected:
	const int SET_NAME  = 15; // - column width for the name
	const int SET_ID    = 14; // - column width for the id
	const int SET_PHONE = 14; // - column width for the phone
	const int SET_AGE   = 5;  // - column width for the age
	const int SET_GEN   = 7;  // - column width for the gender
	const int SET_TITLE = 16; // - column width for the job title
	const int SET_SAL   = 10; // - column width for the salary
	const int SET_DATE  = 8;  // - column width for the date
	string employeeName;   // - holds employee's name

	private:
	int    employeeId;     // - holds employee's id
	string phoneNumber;    // - holds employee's phone number
	int    employeeAge;    // - holds employee's age
	char   employeeGender; // - holds employee's gender
	string employeeTitle;  // - holds employee's title
	double employeeSalary; // - holds employee's salary
	string hireDate;       // - holds employee's hire date

};

#endif /* EMPLOYEE_H_ */
