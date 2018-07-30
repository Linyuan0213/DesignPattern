#include "concrete_factory.h"
#include "abstract_factory.h"

AbstractFactory *AbstractFactory::create_factory(FactoryType factory)
{
	switch (factory)
	{
		case FactoryType::A_Factory:
			return new AFactory();
		case FactoryType::B_Factory:
			return new BFactory();

		default:
			break;
	
	}
}
