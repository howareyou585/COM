#pragma once
//1.系统合成默认构造函数的场景： 类中有一个类对象，且该对象有默认构造函数。
//class MATX
//{
//public:
//	MATX();
//
//};
//class MBTX
//{
//public:
//	MATX m_matx;
//	int m_i;
//	int m_j;
//	void funct();
//};

//2.系统合成默认构造函数的场景： 子类没有构造函数，父类中有默认构造函数
class MATX
{
public:
	MATX();

};
class MBTX:public MATX
{
public:
	int m_i;
	int m_j;
	void funct();
};