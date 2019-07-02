// CmakeTrainVS.cpp: 定义应用程序的入口点。
//

#include "CmakeTrainVS.h"
#include "copyFunc/CopyConstructor.h";
#include "copyFunc/ShallowCopy.cpp";

using namespace std;

CopyConstructor test() {
	CopyConstructor temp(0);
	cout << "函数的返回值是类的对象" << endl;
	return temp;
}

void test(CopyConstructor c) {
	cout << "当函数的参数作为类的对象时" << endl;
}


int ShallowCopy::count = 0;

int main()
{
	//CopyConstructor A(100);
	//CopyConstructor  B = A;
	//test(A);
	//test();
	ShallowCopy copy1;
	cout << "The count of " << ShallowCopy::getCount() << endl;
	ShallowCopy copy2(copy1);
	cout << "The count of " << ShallowCopy::getCount() << endl;
	return 0;
}
