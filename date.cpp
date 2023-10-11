/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/27/2020
 ******************************************************************************/

#include "date.h"

Date::Date()
{
	month = 0;
	day   = 0;
	year  = 0;
}

Date::~Date()
{

}

/******************************************************************************
*FUNCTION - ChangeDate
*______________________________________________________________________________
*This function will change the employee's hire date.
*______________________________________________________________________________
*PRE-CONDITIONS
* nMonth: has to be previously defined.
* nDay  : has to be previously defined.
* nYear : has to be previously defined.
*
*POST-CONDITIONS
* nMonth - sets the new value for employee's month.
* nDay   - sets the new value for employee's day.
* nYear  - sets the new value for employee's year.
*
*******************************************************************************/
void Date::ChangeDate(int nMonth, int nDay, int nYear)
{
	month = nMonth;
	day   = nDay;
	year  = nYear;

}
