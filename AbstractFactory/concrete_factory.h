#ifndef __CONCRETE_FACTORY_H
#define __CONCRETE_FACTORY_H
#include <memory>

#include "abstract_factory.h"
#include "abstract_product.h"

class AFactory : public AbstractFactory 
{
public:
	virtual std::shared_ptr<Car> create_car() override;
	virtual std::shared_ptr<Bike> create_bike() override;

};

class BFactory : public AbstractFactory 
{

public:
	virtual std::shared_ptr<Car> create_car() override;
	virtual std::shared_ptr<Bike> create_bike() override;
};

#endif
