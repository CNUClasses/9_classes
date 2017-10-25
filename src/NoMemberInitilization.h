/*
 * NoMemberInitilization.h
 *
 *  Created on: Oct 16, 2013
 *      Author: lynn
 */

#ifndef NOMEMBERINITILIZATION_H_
#define NOMEMBERINITILIZATION_H_
#include <string>

class NoMemberInitilization {
private:
	std::string myString;
	int        myInt;

public:
	NoMemberInitilization();
	virtual ~NoMemberInitilization();
};

#endif /* NOMEMBERINITILIZATION_H_ */
