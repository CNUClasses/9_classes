/*
 * NoMemberInitilization.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: lynn
 */

#include "NoMemberInitilization.h"
#include "utilities.h"
NoMemberInitilization::NoMemberInitilization() {
	//myStrings no argument (default) constructor called set to 0
	//myInt has garbage in it
}

NoMemberInitilization::~NoMemberInitilization() {
	FTRACE2("MyString=\'" +myString +"\' myInt=",myInt);

}

