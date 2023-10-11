/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/27/2020
 ******************************************************************************/

#include "header.h"
#include "date.h"
#include "employee.h"
#include "programmer.h"
#include "softwareArchitect.h"
#include "softwareTester.h"

int main()
{
	Employee firstEmployee;    // variable that has access to the class
	Programmer programOne;     // variable that has access to the class
	SoftwareArchitect softOne; // variable that has access to the class
	SoftwareTester *tPtr;      // pointer that points to the class
	SoftwareTester lived;
	tPtr = new SoftwareTester;

	//Calls the functions to print out class header
	PrintHeader("Enhanced Employees", 4, 'A');

	cout << "This Program will display the Data for the C1SCE Employee, The"
		 <<	" Programmers" << endl
		 << "and Software Architects. It will display all other pertinent data";
	cout << endl << endl;

	cout << "Data:" << endl << "C1SCEmployees\n\n";

	cout << "These three examples are me just setting the employee's information"
		 <<	" automatically\n";
	//Calls function to display the table
	firstEmployee.DisplayTable();
	//Calls the function to set the initial values
	firstEmployee.SetInitial("Joe Calculus",64879,"949-555-1234",42,'M',
			                 "Math Wiz",110000,"8/31/2017");
	//Calls the functions to display the employee's information
	firstEmployee.Display();
	cout << endl;
	//Calls the function to set the initial values
	firstEmployee.SetInitial("Mary Algebra",76309,"213-555-5555",22,'F',
				             "Math Wiz",170123,"5/08/2017");
	//Calls the functions to display the employee's information
	firstEmployee.Display();
	cout << endl;
	//Calls the function to set the initial values
	firstEmployee.SetInitial("Jo Trig",12345,"714-703-1234",29,'F',
					         "Math Contact",200000,"12/25/2016");
	//Calls the functions to display the employee's information
	firstEmployee.Display();
	cout << endl << endl;
	//Call the function to display the table top
	tPtr->Display();
	cout << endl;
	//Call the function to set the employee's address
	lived.Address(tPtr, "1234 Main Avenue", "Laguna Niguel", "CA",
					    "92677");
	cout << endl;
	//Call the function to set the employee's address
	lived.Address(tPtr, "3333 Marguerite Pwky", "Mission Viejo", "CA",
					    "92646");
	cout << endl;
	//Call the function to set the employee's address
	lived.Address(tPtr, "9876 Elm Street", "San Clemente",
				        "CA","92672");

	return 0;
}
