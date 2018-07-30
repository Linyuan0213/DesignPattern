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

	virtual Car * create_car();
	virtual Bike * create_bike();

	static AbstractFactory *create_factory(FactoryType factory);
};

#endif 
