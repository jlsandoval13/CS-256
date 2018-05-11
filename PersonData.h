#pragma once
#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;

class PersonData
{
protected:
	string address;
	string city;
	string firstName;
	string lastName;
	string phone;
	string state;
	string zip;
public:
	PersonData()
	{	address = "";
		city = "";
		firstName = "";
		lastName = "";
		phone = "";
		state = "";
		zip = "";	}

	PersonData(string f, string l, string a, string c, string s, string z, string p)
	{	set(f, l, a, c, s, z, p);	}

	void set(string l, string f, string a, string c, string s, string z, string p)
	{	lastName = l;
		firstName = f;
		address = a;
		city = c;
		state = s;
		zip = z;
		phone = p;	}

	const string getlastName() const
	{	return lastName;	}
	const string getfirstName() const
	{	return firstName;	}
	const string getaddress() const
	{	return address;	}
	const string getcity() const
	{	return city;	}
	const string getstate() const
	{	return state;	}
	const string getzip() const
	{	return zip;	}
	const string getphone() const
	{	return phone;	}
};
#endif