#ifndef __PRODUCT_H
#define __PRODUCT_H

#include <string>

class Computer
{
public:
    void set_cpu(std::string cpu);
    void set_mainboard(std::string mainboard);
    void set_ram(std::string ram);
    void set_videocard(std::string videocard);

	std::string get_cpu();
	std::string get_mainboard();
	std::string get_ram();
	std::string get_videocard();

private:
	std::string str_cpu;
	std::string str_mainboard;
	std::string str_ram;
	std::string str_videocard;
};

#endif
