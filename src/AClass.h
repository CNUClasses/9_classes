#pragma once
class AClass
{
public:
	//this is a default constructor, compiler writes
	//it for you IFF your class has no other constructors
	AClass();

	//one param constructor
	AClass(int val);

	//this is copy constructor
	AClass(const AClass& other);

	//destructor, note the ~, 
	~AClass(void);
	void afunc();
	void bFunc();

private:
	int i;
};

