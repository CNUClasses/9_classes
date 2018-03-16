/*
 * defaultClass.cpp
 *
 *  Created on: Oct 18, 2013
 *      Author: lynn
 */

#include "defaultClass.h"
defaultClass::defaultClass(int i){
	this->i= new int;
	*(this->i)=i;
}

defaultClass::~defaultClass() {
	if (i)
		delete i;
}
