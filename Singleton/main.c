#include "singleton.h"

void test1()
{
//	Singleton::get_instance().do_print();
}

void test2()
{
	Singleton::get_instance()->do_print();
	Singleton::get_instance()->destory();
}
int main()
{
	test2();
	return 0;	
}
