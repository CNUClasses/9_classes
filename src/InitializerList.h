/*
 * InitializerList.h
 *
 *  Created on: Oct 16, 2013
 *      Author: lynn
 */

#ifndef INITIALIZERLIST_H_
#define INITIALIZERLIST_H_
#include <string>

class InitializerList {
private:
	std::string myString;
	int * const myInt;
//	int *       myInt;

public:
	InitializerList(std::string &init,int *p);
	virtual ~InitializerList();
};

#endif /* INITIALIZERLIST_H_ */
