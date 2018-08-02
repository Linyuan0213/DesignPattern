#ifndef __CONCRETE_PROTO_H
#define __CONCRETE_PROTO_H
#include <iostream>
#include "prototype.h"

class ConcretePrototype : public Prototype 
{
public:
	ConcretePrototype(int num);

	ConcretePrototype(const ConcretePrototype & rhs);

	virtual std::shared_ptr<Prototype> clone() override;
	
	virtual void print() override;
private:
	int m_counter;

};

#endif
