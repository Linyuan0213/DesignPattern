#ifndef __ADAPTER_H
#define __ADAPTER_H
#include <memory>

#include "adaptee.h"
#include "target.h"

class Adapter : public ThreePhaseSocket
{
public:
	Adapter():m_pcharger(std::make_shared<MyCharger>())
	{}

	virtual void charge() override
	{
		m_pcharger->do_charge();
	}
private:
	std::shared_ptr<MyCharger> m_pcharger; //持有需要被适配对象的接口指针
};

#endif 
