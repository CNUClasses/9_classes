/*
 * RAII.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: lynn
 */

#include <string.h>
#include <sstream>
#include <iostream>
#include "RAII.h"
#include "utilities.h"

using namespace std;
const int SPACE_FOR_SLASH0 =1;

RAII::RAII(const char *ps) {
	if (ps) {
		int len = strlen(ps) + SPACE_FOR_SLASH0;	//how much?
		pmyString = new char[len];					//allocate it
		strncpy(pmyString, ps, len);				//copy, include '/0'

		//should know how to use memset
//		memset(pmyString,0x0F,len);
//		//correct direct manipulation
//		pmyString[len-1] = '\0';
//		//or
//		*(pmyString +len-1) = '\0';

//		//ERROR HERE classic off by 1
//		pmyString[len] = '\0';
//		//or
//		*(pmyString +len) = '\0';
	}
	else
	{
		pmyString  = new char[1];
		*pmyString = '\0';
	}
}

RAII::~RAII() {
		delete[] pmyString;
}

