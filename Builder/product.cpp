#include "product.h"

void Computer::set_cpu(std::string cpu)
{
	str_cpu = cpu;
}

void Computer::set_mainboard(std::string mainboard)
{
	str_mainboard = mainboard;
}

void Computer::set_ram(std::string ram)
{
	str_ram = ram;
}

void Computer::set_videocard(std::string videocard)
{
	str_videocard = videocard;
}

std::string Computer::get_cpu()
{
	return str_cpu;
}
std::string Computer::get_mainboard()
{
	return str_mainboard;
}
std::string Computer::get_ram()
{
	return str_ram;
}
std::string Computer::get_videocard()
{
	return str_videocard;
}


