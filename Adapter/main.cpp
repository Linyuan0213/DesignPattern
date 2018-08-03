#include "adapter.h"
#include "target.h"

int main()
{
	std::shared_ptr<ThreePhaseSocket> p_adapter = std::make_shared<Adapter>();
	p_adapter->charge();

	return 0;
}
