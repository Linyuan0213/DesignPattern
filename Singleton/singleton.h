#ifndef __SINGLETON_H
#define __SINGLETON_H

//单例
/*
class Singleton
{
public:
	static Singleton & get_instance();

	void do_print();
	Singleton(const Singleton &) delete;
	Singleton & operator=(const Singleton&) = delete;
private:
	Singleton();

};
*/

//懒汉式
class Singleton
{
public:
	static Singleton *get_instance();
	void do_print();
	static void destory();
private:
	Singleton();
	static Singleton *m_pSingleton;

};
#endif
