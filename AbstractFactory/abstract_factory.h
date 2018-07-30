#ifndef __ABSTRACT_FACTORY_H
#define __ABSTRACT_FACTORY_H
#include <memory>

#include "abstract_product.h"

class AbstractFactory
{
public:
	enum FactoryType
	{
		A_Factory,
		B_Factory 
	};

	virtual std::shared_ptr<Car> create_car() = 0;
	virtual std::shared_ptr<Bike> create_bike() = 0;

	static std::shared_ptr<AbstractFactory> create_factory(FactoryType factory);
};

#endif 
