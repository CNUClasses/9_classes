/*
 * NoDefaultConstructor.h
 *
 *  Created on: Oct 16, 2013
 *      Author: lynn
 */

#ifndef NODEFAULTCONSTRUCTOR_H_
#define NODEFAULTCONSTRUCTOR_H_
#include <string>

class NoDefaultConstructor {
private:
	std::string myString;
	int        myInt;
public:

//	NoDefaultConstructor(int myint);
	virtual ~NoDefaultConstructor();
};

#endif /* NODEFAULTCONSTRUCTOR_H_ */
