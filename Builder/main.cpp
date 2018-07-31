#include "director.h"
#include "concrete_builder.h"
#include <memory>
#include <iostream>
int main()
{
	std::shared_ptr<Dirctor> p_dirctor = std::make_shared<Dirctor>();
	
	
	std::shared_ptr<ThinkPadBuilder> p_tpbuilder = std::make_shared<ThinkPadBuilder>();
	std::shared_ptr<YogaBuilder> p_ybuilder = std::make_shared<YogaBuilder>();

	//build computer
	p_dirctor->create(p_tpbuilder);
	p_dirctor->create(p_ybuilder);

	//获取组装后电脑
	std::shared_ptr<Computer> p_thinkpad =  p_tpbuilder->get_result();
	std::shared_ptr<Computer> p_yoga = p_ybuilder->get_result();

	//thikpad
	std::cout << "ThinkPad: " << std::endl;
	std::cout << "CPU: " << p_thinkpad->get_cpu() << std::endl;
	std::cout << "MainBoard: " << p_thinkpad->get_mainboard() << std::endl;
	std::cout << "RAM: " << p_thinkpad->get_ram() << std::endl;
	std::cout << "VideoCard: " << p_thinkpad->get_videocard() << std::endl;

	std::cout << std::endl;

	//yoga
	std::cout << "Yoga: " << std::endl;
	std::cout << "CPU: " << p_yoga->get_cpu() << std::endl;
	std::cout << "MainBoard: " << p_yoga->get_mainboard() << std::endl;
	std::cout << "RAM: " << p_yoga->get_ram() << std::endl;
	std::cout << "VideoCard: " << p_yoga->get_videocard() << std::endl;

	return 0;
}
