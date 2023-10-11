/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/26/2020
 ******************************************************************************/

#include "programmer.h"

Programmer::Programmer()
{
	departNumber = 0;  // - sets employee's department name
	percentInc = 0;        // - sets employee's percent increase
	cppIden = 'Y';         // - sets employee's c++ knowledge
	javaIden = 'Y';
}

Programmer::~Programmer()
{

}

/******************************************************************************
*FUNCTION - SetInitial
*______________________________________________________________________________
*This function set the initial values for the employee
*______________________________________________________________________________
*PRE-CONDITIONS
* dNumber: has to be previously defined.
* sName  : has to be previously defined.
* pInc   : has to be previously defined.
* cIdn   : has to be previously defined.
* javId  : has to be previously defined.
*POST-CONDITIONS
* departNumber   - sets the new value for employee's department number.
* supervisorName - sets the new value for employee's supervisors name.
* percentInc     - sets the new value for employee's salary % increase.
* cppIden        - sets the new value for employee's C++ knowledge status(Y/N).
* javaIden       - sets the new value for employee's Java knowledge status(Y/N).
*******************************************************************************/
void Programmer::SetInitial(string eName, int dNumber, string sName, int pInc,
							string cIdn, string javId)
{
	Employee::ChangeEmployeesName(eName);
	departNumber = dNumber;
	supervisorName = sName;
	percentInc = pInc;
	cppIden = cIdn;
	javaIden = javId;
}

/******************************************************************************
*FUNCTION - CdepartmentNum
*______________________________________________________________________________
*This function changes the employee's department number.
*______________________________________________________________________________
*PRE-CONDITIONS
* dNum: has to be previously defined.
*
*POST-CONDITIONS
* departmentNumber- sets the new value for the employee's department number.
*
*******************************************************************************/
void Programmer::ChangeDepartmentNum(int dNum)
{
	departNumber = dNum;
}

/******************************************************************************
*FUNCTION - CsupervisorName
*______________________________________________________________________________
*This function changes the employee's supervisors name.
*______________________________________________________________________________
*PRE-CONDITIONS
* sName: has to be previously defined.
*
*POST-CONDITIONS
* supervisorName - sets the new value for the employee's supervisor.
*
*******************************************************************************/
void Programmer::ChangeSupervisorName(string sName)
{
	supervisorName = sName;
}

/******************************************************************************
*FUNCTION - CpercentInc
*______________________________________________________________________________
*This function changes the employee's salary percent increase.
*______________________________________________________________________________
*PRE-CONDITIONS
* pInc: has to be previously defined.
*
*POST-CONDITIONS
* percentInc- sets the new value for the employee's percent increase.
*
*******************************************************************************/
void Programmer::ChangePercentInc(int pInc)
{
	percentInc = pInc;
}

/******************************************************************************
*FUNCTION - CcppIdentifier
*______________________________________________________________________________
*This function changes the employee's c++ status to (Y/N).
*______________________________________________________________________________
*PRE-CONDITIONS
* cIdent: has to be previously defined.
*
*POST-CONDITIONS
* cppIden- sets a (Y/N) value.
*
*******************************************************************************/
void Programmer::ChangeCppIdentifier(string cIden)
{
	cppIden = cIden;
}

/******************************************************************************
*FUNCTION - ChangeEmployeesPhone
*______________________________________________________________________________
*This function changes the employee's java status (Y/N).
*______________________________________________________________________________
*PRE-CONDITIONS
* jIden: has to be previously defined.
*
*POST-CONDITIONS
* javaIden- sets a (Y/N) value.
*
*******************************************************************************/
void Programmer::ChangeJavaIdentifier(string jIden)
{
	javaIden = jIden;
}

/******************************************************************************
*FUNCTION - DisplayTable
*______________________________________________________________________________
*This function will print out the table heading.
*______________________________________________________________________________
*PRE-CONDITIONS
* This is a void function
*
*POST-CONDITIONS
* This will not change anything member variables
*
*******************************************************************************/
void Programmer::DisplayTable() const
{
	#include <iomanip>
	cout << left;

	cout << setw(SET_NAME) << "Name" << setw(SET_ID) << "Department"
		 << setw(18) << "Supervisor Name" << setw(SET_DATE) << "Raise %"
		 << setw(SET_TITLE) << "C++ Knowledge" << setw(SET_ID)
		 << "Java Knowledge" << endl;
	cout << right;
}

/******************************************************************************
*FUNCTION - Display
*______________________________________________________________________________
*This function will print out all the information that was stored.
*______________________________________________________________________________
*PRE-CONDITIONS
* This is a void function
*
*POST-CONDITIONS
* This will not change anything member variables
*
*******************************************************************************/
void Programmer::Display() const
{
	string eName;
	//Employee::Display();
	//Employee::ChangeEmployeesName(eName);
#include <iomanip>
	cout << left;

	cout << setw(SET_NAME) << employeeName << setw(SET_ID) << departNumber
		 << setw(18) << supervisorName << setw(SET_DATE) << percentInc
		 << setw(SET_TITLE) << cppIden << setw(SET_ID)
		 << javaIden << endl;
	cout << right;

}
