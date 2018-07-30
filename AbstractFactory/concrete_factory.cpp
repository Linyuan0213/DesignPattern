#include "concrete_factory.h"
#include "concrete_product.h"
#include "abstract_product.h"

std::shared_ptr<Car> AFactory::create_car()
{
	auto a_car = std::make_shared<ACar>();
	return a_car;
}

std::shared_ptr<Bike> AFactory::create_bike()
{
	auto a_bike = std::make_shared<ABike>();
	return a_bike;
}

std::shared_ptr<Car> BFactory::create_car()
{
	auto b_car = std::make_shared<BCar>();
	return b_car;
}

std::shared_ptr<Bike> BFactory::create_bike()
{
	auto b_bike = std::make_shared<BBike>();
	return b_bike;
}


