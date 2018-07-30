#ifndef __CONCRETE_FACTORY_H
#define __CONCRETE_FACTORY_H

#include "abstract_factory.h"
#include "abstract_product.h"

class AFactory : public AbstractFactory 
{
public:
	virtual Car	 *create_car()	override;
	virtual Bike *create_bike() override;

};

class BFactory : public AbstractFactory 
{

public:
	virtual Car	 *create_car()	override;
	virtual Bike *create_bike() override;
};

#endif
