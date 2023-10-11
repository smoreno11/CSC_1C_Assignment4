/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 4
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 3/27/2020
 ******************************************************************************/

#ifndef DATE_H_
#define DATE_H_

#include "header.h"

class Date
{
	public:
	Date();
	~Date();

	void ChangeDate(int nMonth, int nDay, int nYear);//Changes the month, day
	                                                 // and year

	private:
	int month; // holds the value for the month
	int day;   // holds the value for the day
	int year;  // holds the value for the year
};

#endif /* DATE_H_ */
