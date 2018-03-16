//============================================================================
// Name        : 9_classes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
#include "utilities.h"
#include "CopyConstructor.h"
#include "NoDefaultConstructor.h"
#include "NoMemberInitilization.h"
#include "HoldsDynamicData.h"
#include "RAII.h"
#include "PlainClass.h"
#include "string.h"
#include "defaultClass.h"
#include "InitializerList.h"
#include "AClass.h"

using namespace std;

void forgotToPassByRef(CopyConstructor& myC){
	int i=1;
	//can be a big deal if have pointer data in myC

}

int main() {
	//why does this work?
//	defaultClass d11(1);	//1 arg constructor
//	defaultClass d22(d11);	//copy constructor
//	defaultClass d33(2);
//	d33 = d11; 			//assignment operator
//
//
//	HoldsDynamicData my111("my111");
//	HoldsDynamicData myNew111(my111);	//copy constructor
//	HoldsDynamicData my222("my222");
//
//	my222 = my111;						//assignment operator
	//copy constructor
	CopyConstructor myC;
	myC.setValues(3, 4);

	//call the copyconstructor 2 ways
	CopyConstructor myNewC(myC);	//like initilizer lists
	forgotToPassByRef(myC);			//function pass by value calls copy constructor

//	{						//usage
//		AClass ac1;			//default constructor
//		AClass ac2(ac1);	//copy constructor
//	}						//ac1 and ac2 destructors called

	//
	//
	//	//compiler makes constructor for you
	//	//wind up with garbage in myNDC.myInt
	//	NoDefaultConstructor myNDC;
	//
	//	//no member init, brackets force destructor call
	//	{
	//		NoMemberInitilization myNMI;
	//	}
	//
	//	//letting destructors manage deallocation
	//	{
	//		string mystring = "mystring";
	//		RAII myRAII(mystring.c_str());
	//	}
	//
	//	//initializer list
	//	int myInt =3;
	//	std::string myString="myString";
	//	InitializerList myIL(myString,&myInt);
	//
	//	//==========================================


	//	//==========================================
//	//assignment operator
//	RAII myRAII_1("111");
//	RAII myRAII2_2("222");
//	//is this bad?  Calling default assignment operator?
//	myRAII_1 = myRAII2_2;
//
//	//	//==========================================

}



