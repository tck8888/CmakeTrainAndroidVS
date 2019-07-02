#include "CopyConstructor.h"

CopyConstructor::CopyConstructor()
{
	cout << "无参构造函数" << endl;
}

CopyConstructor::CopyConstructor(int b)
{
	a = b;
	cout << "有参构造函数" << endl;
}

CopyConstructor::~CopyConstructor()
{
	cout << "析构函数" << endl;
}

CopyConstructor::CopyConstructor(const CopyConstructor& c)
{
	a = c.a;
	cout<<"拷贝函数"<<endl;
}


