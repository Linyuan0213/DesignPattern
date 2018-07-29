#include "singleton.h"
#include <iostream>

//单例
/* 
 
Singleton::Singleton(){}


 Singleton& Singleton::get_instance()
{
	static Singleton instance;
	return 	instance;
}

void Singleton::do_print()
{
	std::cout << "do something" << std::endl;
}
*/ 

Singleton::Singleton(){}

Singleton *Singleton::m_pSingleton = nullptr;

 Singleton* Singleton::get_instance()
{
	if (m_pSingleton == nullptr)
	{
		m_pSingleton = new Singleton();
	}
	return 	m_pSingleton;
}

void Singleton::destory()
{
	if (m_pSingleton != nullptr)
	{
		delete m_pSingleton;
		m_pSingleton = nullptr;
	}
}
void Singleton::do_print()
{
	std::cout << "do something" << std::endl;
}
