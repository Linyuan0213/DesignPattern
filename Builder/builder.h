#ifndef __BUILDER_H
#define __BUILDER_H

#include "product.h"
#include <memory>

//建造者接口
class Builder
{
public:
	virtual void build_cpu() = 0;
	virtual void build_mainboard() = 0;
	virtual void build_ram() = 0;
	virtual void build_videocard() = 0;

	virtual std::shared_ptr<Computer> get_result() = 0; //得到构建后结果
};

#endif 
