#ifndef __ABSTRACT_FACTORY_H
#define __ABSTRACT_FACTORY_H

#include "abstract_product.h"

class AbstractFactory
{
public:
	enum FactoryType
	{
		A_Factory,
		B_Factory 
	};

	virtual Car * create_car() = 0;
	virtual Bike * create_bike() = 0;

	static AbstractFactory *create_factory(FactoryType factory);
};

#endif 
