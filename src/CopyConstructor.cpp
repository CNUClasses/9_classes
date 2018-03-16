/*
 * CopyConstructor.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: lynn
 */

#include "utilities.h"
#include "CopyConstructor.h"

CopyConstructor::CopyConstructor() {
//	FTRACE1("in Default Constructor");

}

CopyConstructor::~CopyConstructor() {
	// TODO Auto-generated destructor stub
}

CopyConstructor::CopyConstructor(const CopyConstructor& other) {
//	FTRACE1("in Copy Constructor");
	//this is a convenient reference to the current object
	this->i = other.i;
	j=other.j;
}

void CopyConstructor::setValues(int i, int j){
	this->i = i;
	this->j = j;
}




