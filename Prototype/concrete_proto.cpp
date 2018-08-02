#include "concrete_proto.h"

ConcretePrototype::ConcretePrototype(int num):m_counter(num){}

ConcretePrototype::ConcretePrototype(const ConcretePrototype & rhs)
{
	m_counter = rhs.m_counter;
}

std::shared_ptr<Prototype> ConcretePrototype::clone()
{
	auto p_clone = std::make_shared<ConcretePrototype> (*this);
	return p_clone;
}	
void ConcretePrototype::print()
{
	std::cout << m_counter << std::endl;
}

