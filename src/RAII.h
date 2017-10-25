/*
 * RAII.h
 *
 *  Created on: Oct 16, 2013
 *      Author: lynn
 */

#ifndef RAII_H_
#define RAII_H_

class RAII {
private:
	char *pmyString;
public:
	RAII(const char *pstring);
	virtual ~RAII();
};

#endif /* RAII_H_ */
