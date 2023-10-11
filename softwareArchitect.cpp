/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/27/2020
 ******************************************************************************/

#include "softwareArchitect.h"

SoftwareArchitect::SoftwareArchitect()
{
	departmentNumber = 0;
	salaryPercentInc = 0;
	numExp           = 0;
}

SoftwareArchitect::~SoftwareArchitect()
{

}

/******************************************************************************
*FUNCTION - SetInitial
*______________________________________________________________________________
*This function set the initial values for the employee
*______________________________________________________________________________
*PRE-CONDITIONS
* eName : has to be previously defined.
* dNum  : has to be previously defined.
* sName : has to be previously defined.
* sPer  : has to be previously defined.
* nExp  : has to be previously defined.
*POST-CONDITIONS
* employeeName     - sets the new value for employee's name.
* departNumber     - sets the new value for employee's department number.
* supervisorName   - sets the new value for employee's supervisors name.
* salaryPercentInc - sets the new value for employee's salary % increase.
* numExp           - sets the new value for employee's # of experience.
*******************************************************************************/
void SoftwareArchitect::SetInitial(string eName, int dNum, string sName,
		                           int sPer, int nExp)
{
	Employee::ChangeEmployeesName(eName);
	departmentNumber = dNum;
	supervisorName = sName;
	salaryPercentInc = sPer;
	numExp = nExp;
}

/******************************************************************************
*FUNCTION - ChangeDepartNum
*______________________________________________________________________________
*This function changes the employee's department number.
*______________________________________________________________________________
*PRE-CONDITIONS
* dNum: has to be previously defined.
*
*POST-CONDITIONS
* departNumber- sets the new value for employee's department number.
*
*******************************************************************************/
void SoftwareArchitect::ChangeDepartNum(int dNum)
{
	departmentNumber = dNum;
}

/******************************************************************************
*FUNCTION - ChangeSuperName
*______________________________________________________________________________
*This function change the employee's supervisors name.
*______________________________________________________________________________
*PRE-CONDITIONS
* sName: has to be previously defined.
*
*POST-CONDITIONS
* supervisorName- sets the new value for employee's supervisors name.
*
*******************************************************************************/
void SoftwareArchitect::ChangeSuperName(string sName)
{
	supervisorName = sName;
}

/******************************************************************************
*FUNCTION - ChangeSalPer
*______________________________________________________________________________
*This function will change the employee's salary percent increase.
*______________________________________________________________________________
*PRE-CONDITIONS
*sName: has to be previously defined.
*
*POST-CONDITIONS
*supervisorName- sets the new value for employee's supervisors name.
*
*******************************************************************************/
void SoftwareArchitect::ChangeSalPer(int sPer)
{
	salaryPercentInc = sPer;
}

/******************************************************************************
*FUNCTION - ChangeNumExp
*______________________________________________________________________________
*This function will change the number of years of experience that the
*employee has.
*______________________________________________________________________________
*PRE-CONDITIONS
* nExp: has to be previously defined.
*
*POST-CONDITIONS
* numExp - sets the new value for employee's # of experience.
*
*******************************************************************************/
void SoftwareArchitect::ChangeNumExp(int nExp)
{
	numExp = nExp;
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
void SoftwareArchitect::DisplayTable() const
{
	#include <iomanip>
	cout << left;

	cout << setw(SET_NAME) << "Name" << setw(SET_ID) << "Department"
		 << setw(17) << "Supervisor Name" << setw(6) << "Raise"
		 << setw(SET_GEN) << "Years of Experience" << endl;
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
void SoftwareArchitect::Display() const
{
	#include <iomanip>
	cout << left;

	cout << setw(SET_NAME) << employeeName << setw(SET_ID) << departmentNumber
		 << setw(17) << supervisorName << setw(6) << salaryPercentInc
		 << setw(SET_GEN) << numExp << endl;
	cout << right;
}
