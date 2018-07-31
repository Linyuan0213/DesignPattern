#include "director.h"

void Dirctor::create(std::shared_ptr<Builder> builder)
{
	builder->build_cpu();
	builder->build_mainboard();
	builder->build_ram();
	builder->build_videocard();
}
