#ifndef __PROTOTYPE_H
#define __PROTOTYPE_H

#include <memory>

//抽象原型
class Prototype
{
public:
	Prototype(){}
	virtual ~Prototype(){}
	virtual std::shared_ptr<Prototype> clone() = 0; 
	virtual void print() = 0;
};

#endif
