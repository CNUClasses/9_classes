#include "AClass.h"

//this is a default constructor, compiler writes
//it for you if your class has no other constructors
AClass::AClass():i(0)
{
	//whats i = to? use initializer list
}

AClass::AClass(int val):i(i)
{
}

//destructor, note the ~
AClass::~AClass(void)
{
}

AClass::AClass(const AClass& other) {
	//'this' is a convenient reference to the current object
	this->i = other.i;
}

void AClass::afunc(){
	i=6;
}


void AClass::bFunc(){
	i=7;
}