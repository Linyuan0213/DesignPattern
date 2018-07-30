#include <memory>

#include "concrete_factory.h"
#include "abstract_factory.h"


std::shared_ptr<AbstractFactory> AbstractFactory::create_factory(FactoryType factory)
{
	switch (factory)
	{
		case FactoryType::A_Factory:
		{
			auto a_facotory = std::make_shared<AFactory>();
			return a_facotory;
		}

		case FactoryType::B_Factory:
		{
			auto b_factory = std::make_shared<BFactory>();
			return b_factory;
		}

		default:
			return nullptr;
	}
}
