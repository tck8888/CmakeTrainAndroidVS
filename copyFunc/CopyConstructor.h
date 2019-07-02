#include<iostream>

using namespace std;

class CopyConstructor
{
public:
	CopyConstructor();
	CopyConstructor(int a);
	~CopyConstructor();
	CopyConstructor(const CopyConstructor& c);
private:
	int a;
};