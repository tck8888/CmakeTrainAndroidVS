#include "CopyConstructor.h"

CopyConstructor::CopyConstructor()
{
	cout << "�޲ι��캯��" << endl;
}

CopyConstructor::CopyConstructor(int b)
{
	a = b;
	cout << "�вι��캯��" << endl;
}

CopyConstructor::~CopyConstructor()
{
	cout << "��������" << endl;
}

CopyConstructor::CopyConstructor(const CopyConstructor& c)
{
	a = c.a;
	cout<<"��������"<<endl;
}


