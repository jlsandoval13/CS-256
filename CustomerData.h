#pragma once
#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h"
using namespace std;

class CustomerData : public PersonData
{
private
	int customerNumber;
	bool mailingList;
public:
	CustomerData() : PersonData() {
		customerNumber = 0;
		mailingList = true;
	}
	
	CustomerData(string f, string l, string a, string c, string s, string z, string p) : PersonData(f, l, a, c, s, z, p) {
		customerNumber = 0;
		mailingList = true;
	}

	void setcustomerNumber(int cn)
	{	customerNumber = cn;	}
	void setmailingList(bool m)
	{	mailingList = m;	}
};
#endif