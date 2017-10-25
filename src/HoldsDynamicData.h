/*
 * HoldsDynamicData.h
 *
 *  Created on: Oct 16, 2013
 *      Author: lynn
 */

#ifndef HOLDSDYNAMICDATA_H_
#define HOLDSDYNAMICDATA_H_
#include <string.h>


class HoldsDynamicData {
private:
	char *ps;
public:
	HoldsDynamicData(char * myString);
	virtual ~HoldsDynamicData();

	//copy constructor
	HoldsDynamicData(const HoldsDynamicData& other);
	//assignment operator
	HoldsDynamicData & operator= (const HoldsDynamicData & other);
};

#endif /* HOLDSDYNAMICDATA_H_ */
