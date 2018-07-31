#include "concrete_builder.h"

//ThinkPad
ThinkPadBuilder::ThinkPadBuilder():m_pcomputer(std::make_shared<Computer>()){}

void ThinkPadBuilder::build_cpu()
{
	m_pcomputer->set_cpu("i5");
}
void ThinkPadBuilder::build_mainboard()
{
	m_pcomputer->set_mainboard("Intel");
}
void ThinkPadBuilder::build_ram()
{
	m_pcomputer->set_ram("DDR4");
}
void ThinkPadBuilder::build_videocard()
{
	m_pcomputer->set_videocard("GTX950");
}

std::shared_ptr<Computer> ThinkPadBuilder::get_result()
{
	return m_pcomputer;
}

//Yoga
YogaBuilder::YogaBuilder():m_pcomputer(std::make_shared<Computer>()){}

void YogaBuilder::build_cpu()
{ 
	m_pcomputer->set_cpu("i5");
}
void YogaBuilder::build_mainboard()
{ 
	m_pcomputer->set_mainboard("Intel");
}
void YogaBuilder::build_ram()
{
	m_pcomputer->set_ram("DDR4");
} 
void YogaBuilder::build_videocard()
{
	m_pcomputer->set_videocard("GTX950");
} 

std::shared_ptr<Computer> YogaBuilder::get_result()
{ 
	return m_pcomputer;
}
