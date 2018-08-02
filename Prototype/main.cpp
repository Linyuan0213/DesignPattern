#include <iostream>
#include "concrete_proto.h"

int main()
{
	std::shared_ptr<Prototype> p = std::make_shared<ConcretePrototype>(10);
	std::shared_ptr<Prototype > p1 = p->clone();
	std::shared_ptr<Prototype>  p2 = p1->clone();
	
	p1->print();
	p2->print();
	
	return 0;
}
