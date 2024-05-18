#pragma once
#ifndef University_h
#define Univeristy_h

#include<iostream>
#include<string>
using namespace std;
class University
{
public:
	
	string location;
	string uni_name;
	string departments;
	string list_collages;
public:
	string addUniName();
	void setUniName(string);
	
	void setUniDeparments();
	string addUniCollage();
	void setUniCollage(string);
#endif
};

