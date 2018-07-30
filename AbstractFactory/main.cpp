#include <iostream>

#include "abstract_factory.h"
#include "abstract_product.h"
int main()
{
	AbstractFactory *p_factory = 
		AbstractFactory::create_factory(AbstractFactory::FactoryType::A_Factory);
	
	Car *p_car = p_factory->create_car();
	Bike *p_bike = p_factory->create_bike();
	std::cout << "A Car:" << p_car->name() << std::endl;
	std::cout << "A Bike:" << p_bike->name() << std::endl;
	
	return 0;
}
