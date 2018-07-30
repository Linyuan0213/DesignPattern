#ifndef __ABSTRACT_PRODUCT_H
#define __ABSTRACT_PRODUCT_H

#include <string>

//车接口
class Car
{
public:
	virtual std::string name() = 0;
};

//自行车借口
class Bike
{
public:
	virtual std::string name() = 0;

};

#endif
