#pragma once
//1.ϵͳ�ϳ�Ĭ�Ϲ��캯���ĳ����� ������һ��������Ҹö�����Ĭ�Ϲ��캯����
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

//2.ϵͳ�ϳ�Ĭ�Ϲ��캯���ĳ����� ����û�й��캯������������Ĭ�Ϲ��캯��
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