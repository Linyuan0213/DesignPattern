#include "concrete_factory.h"
#include "concrete_product.h"

Car *AFactory::create_car()
{
	return new ACar();
}

Bike *AFactory::create_bike()
{
	return new ABike();
}

Car *BFactory::create_car()
{
	return new BCar();
}

Bike *BFactory::create_bike()
{
	return new BBike();
}


