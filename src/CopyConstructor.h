/*
 * CopyConstructor.h
 *
 *  Created on: Oct 16, 2013
 *      Author: lynn
 */

#ifndef COPYCONSTRUCTOR_H_
#define COPYCONSTRUCTOR_H_

class CopyConstructor {
private:
	int i;
	int j;

public:
	//this is a default constructor, compiler writes
	//it for you if your class has no other constructors
	CopyConstructor();

	//this is copy constructor
	CopyConstructor(const CopyConstructor& other);

	virtual ~CopyConstructor();

	void setValues(int i, int j);
};

#endif /* COPYCONSTRUCTOR_H_ */
