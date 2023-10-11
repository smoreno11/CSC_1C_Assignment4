/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/27/2020
 ******************************************************************************/

#include "employee.h"

Employee::Employee()
{
	employeeName = "Saul Moreno";
	employeeId = 255;       // - sets employee's id
	phoneNumber = "523-545-5254";
	employeeAge = 0;      // - sets employee's age
	employeeGender = 'M'; // - sets employee's gender
	employeeTitle = " ";
	employeeSalary = 0;   // - holds employee's salary
	hireDate = "12/12/21";
}

Employee::~Employee()
{

}

/******************************************************************************
*FUNCTION - SetInitial
*______________________________________________________________________________
*This function set the initial values for the employee
*______________________________________________________________________________
*PRE-CONDITIONS
* eName  : has to be previously defined.
* eId    : has to be previously defined.
* ePhone : has to be previously defined.
* eAge   : has to be previously defined.
* eGender: has to be previously defined.
* eTitle : has to be previously defined.
* eSalary: has to be previously defined.
* eHire  : has to be previously defined.
*POST-CONDITIONS
* employeeName  - sets the new value for employee's name.
* employeeId    - sets the new value for employee's id.
* phoneNumber   - sets the new value for employee's phone number.
* employeeAge   - sets the new value for employee's age.
* employeeGender - sets the new value for employee's gender.
* employeeTitle  - sets the new value for employee's title.
* employeeSalary - sets the new value for employee's salary
* hireDate       - sets the new value for employee's hire date.
*******************************************************************************/
void Employee::SetInitial(string eName, int eId, string ePhone, int eAge,
					char eGender, string eTitle, double eSalary, string eHire)
{
	employeeName = eName;
	employeeId = eId;
	phoneNumber = ePhone;
	employeeAge = eAge;
	employeeGender = eGender;
	employeeTitle = eTitle;
	employeeSalary = eSalary;
	hireDate = eHire;
}

/******************************************************************************
*FUNCTION - ChangeEmployeesName
*______________________________________________________________________________
*This function will change the employee's name.
*______________________________________________________________________________
*PRE-CONDITIONS
* eName: has to be previously defined.
*
*POST-CONDITIONS
* employeeName - sets the new value for employee's name.
*
*******************************************************************************/
void Employee::ChangeEmployeesName(string eName)
{
	employeeName = eName;
}

/******************************************************************************
*FUNCTION - ChangeEmployeesId
*______________________________________________________________________________
*This function will change the employee's ID.
*______________________________________________________________________________
*PRE-CONDITIONS
* eId: has to be previously defined.
*
*POST-CONDITIONS
* employeeId - sets the new value for the employee's ID.
*
*******************************************************************************/
void Employee::ChangeEmployeesId(int eId)
{
	employeeId = eId;
}

/******************************************************************************
*FUNCTION - ChangeEmployeesPhone
*______________________________________________________________________________
*This function changes the employee's phone number.
*______________________________________________________________________________
*PRE-CONDITIONS
* ePhone: has to be previously defined.
*
*POST-CONDITIONS
* phoneNumber - sets the new value for the employee's phone number.
*
*******************************************************************************/
void Employee::ChangeEmployeesPhone(string ePhone)
{
	phoneNumber = ePhone;
}

/******************************************************************************
*FUNCTION - ChangeEmployeesAge
*______________________________________________________________________________
*This function changes the employee's age.
*______________________________________________________________________________
*PRE-CONDITIONS
* eAge: has to be previously defined.
*
*POST-CONDITIONS
* employeeAge - sets the new value for the employee.
*
*******************************************************************************/
void Employee::ChangeEmployeesAge(int eAge)
{
	employeeAge = eAge;
}

/******************************************************************************
*FUNCTION - ChangeEmployeesGender
*______________________________________________________________________________
*This function will change the employee's gender.
*______________________________________________________________________________
*PRE-CONDITIONS
* eGender: has to be previously defined.
*
*POST-CONDITIONS
* employeeGender - sets the new value for employee's gender.
*
*******************************************************************************/
void Employee::ChangeEmployeesGender(char eGender)
{
	employeeGender = eGender;
}

/******************************************************************************
*FUNCTION - ChangeEmployeesJobTitle
*______________________________________________________________________________
*This function will set employee's job title.
*______________________________________________________________________________
*PRE-CONDITIONS
* eTitle: has to be previously defined.
*
*POST-CONDITIONS
* employeeTitle - stores the new value for employee's job title.
*
*******************************************************************************/
void Employee::ChangeEmployeesJobTitle(string eTitle)
{
	employeeTitle = eTitle;
}

/******************************************************************************
*FUNCTION - ChangeEmployeesSalary
*______________________________________________________________________________
*This function will change the employee's salary.
*______________________________________________________________________________
*PRE-CONDITIONS
* eSalary: has to previously be defined.
*
*POST-CONDITIONS
* employeeSalary - stores the new value for employees salary.
*
*******************************************************************************/
void Employee::ChangeEmployeesSalary(double eSalary)
{
	employeeSalary = eSalary;
}

/******************************************************************************
*FUNCTION - ChangeEmployeesHireDate
*______________________________________________________________________________
*This function will change the employee's hire date.
*______________________________________________________________________________
*PRE-CONDITIONS
* eHire: has to previously be defined.
*
*POST-CONDITIONS
* hireDate - stores the new value for the hire date.
*
*******************************************************************************/
void Employee::ChangeEmployeesHireDate(string eHire)
{
	hireDate = eHire;
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
void Employee::DisplayTable() const
{
	#include <iomanip>
	cout << left;

	cout << setw(SET_NAME) << "Name" << setw(SET_ID) << "Employee's Id"
		 << setw(SET_PHONE) << "Phone" << setw(SET_AGE) << "Age"
		 << setw(SET_GEN) << "Gender" << setw(SET_TITLE) << "Job Title"
		 << setw(SET_SAL) << "Salary" << setw(SET_DATE) << "Date" << endl;
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
void Employee::Display() const
{
	#include <iomanip>

	cout << left;
	cout << setprecision(7);

	cout << setw(SET_NAME) << employeeName
		 << setw(SET_ID) << employeeId
		 << setw(SET_PHONE) << phoneNumber
		 << setw(SET_AGE) << employeeAge
		 << setw(SET_GEN) << employeeGender
		 << setw(SET_TITLE) << employeeTitle
		 << '$'<< setw(SET_SAL) << employeeSalary
		 << setw(SET_DATE) << hireDate;
	cout << right;
	cout << setprecision(6);
}
