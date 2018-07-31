#ifndef __CONCRETE_BUILDER_H
#define __CONCRETE_BUILDER_H

#include <memory>
#include "builder.h"


class ThinkPadBuilder : public Builder 
{
public:
	ThinkPadBuilder();
	
	void build_cpu();
	void build_mainboard();
	void build_ram();
	void build_videocard();

	std::shared_ptr<Computer> get_result();

private:
	std::shared_ptr<Computer> m_pcomputer;
};

class YogaBuilder : public Builder 
{
public:
	YogaBuilder();
	
	void build_cpu();
	void build_mainboard();
	void build_ram();
	void build_videocard();

	std::shared_ptr<Computer> get_result();

private:
	std::shared_ptr<Computer> m_pcomputer;
};


#endif 
