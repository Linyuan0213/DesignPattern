#ifndef __CONCRETE_PROTO_H
#define __CONCRETE_PROTO_H
#include <iostream>
#include "prototype.h"

//具体原型
class ConcretePrototype : public Prototype 
{
public:
	ConcretePrototype(int num);
	//拷贝构造
	ConcretePrototype(const ConcretePrototype & rhs);

	//克隆对象本身
	virtual std::shared_ptr<Prototype> clone() override;
	
	virtual void print() override;
private:
	int m_counter;

};

#endif
