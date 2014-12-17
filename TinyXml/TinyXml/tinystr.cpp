#include <iostream>
#include "tinystr.h"
//静态成员的定义
TiXmlString::Rep TiXmlString::nullrep_ = {0, 0, '\0'};




using namespace std;
class A
{
public:
	int len;
public:
	A()
	{
		len = 1;
		cout<<"A"<<endl;
	}
	~A()
	{
		len = 2;
		cout<<"~A"<<endl;
	}
	A(const A& a)
	{
		this->len = a.len;
		cout<<"AAA"<<endl;
	}
	A& operator=(const A& a)
	{
		cout<<"=="<<endl;
		return *this;
	}
};
A& fun()
{
	A a;
	return a;
}
int main()
{
	A b = fun();
	getchar();
	return 0;
}



