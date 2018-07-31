#ifndef __DIRECOTR_H
#define __DIRECOTR_H

#include <memory>
#include "builder.h"

//指挥者
class Dirctor
{
public:
	void create(std::shared_ptr<Builder> builder); //组装函数
};

#endif 
