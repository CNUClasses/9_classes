/*
 * HoldsDynamicData.cpp

 *
 *  Created on: Oct 16, 2013
 *      Author: lynn
 */

#include <string>
#include <sstream>
#include <iostream>
#include "utilities.h"
#include "HoldsDynamicData.h"
using namespace std;

string IntToString (  int Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }
HoldsDynamicData::HoldsDynamicData(char *myString): ps(0) {
	if (myString){
		int len = strlen(myString) +1;
		ps = new char[len];
		memset(ps,0,len);
		strncpy(ps,myString,len);
//		FTRACE2("Constructor, pointer address=",IntToString ((int)ps));
	}
}


HoldsDynamicData::~HoldsDynamicData() {
	if (ps)
		delete[] ps;
}

////copy constructor the wrong way (this is what compiler will give you if you have no
////copy constructor, wind up with 2 objects pointing to same data what happens when 1 object
////goes out of scope? what about when the last 1 goes out of scope?
//HoldsDynamicData::HoldsDynamicData(const HoldsDynamicData& other){
//	ps = other.ps;
//	FTRACE2("Copy constructor, pointer address=",IntToString ((int)ps));
//}

//copy constructor the right way
HoldsDynamicData::HoldsDynamicData(const HoldsDynamicData& other){
	if (other.ps)
	{
		int len = strlen(other.ps) +1;
		ps = new char[len];
		memset(ps,0,len);
		strncpy(ps,other.ps,len);
//		FTRACE2("Copy constructor, pointer address=",IntToString ((int)ps));
	}
}

HoldsDynamicData & HoldsDynamicData::operator=(const HoldsDynamicData & other)
    {
        if (this != &other) // protect against invalid self-assignment
        {
           // 1: deallocate old memory
        	if (ps)
        		delete [] ps;

            // 2: allocate new memory and copy the elements
        	if (other.ps)
        	{
        		int len = strlen(other.ps) +1;
        		ps = new char[len];
        		memset(ps,0,len);
        		strncpy(ps,other.ps,len);
//        		FTRACE2("Assignment operator, pointer address=",IntToString ((int)ps));
        	}
        }
        // by convention, always return *this
        return *this;
    }
