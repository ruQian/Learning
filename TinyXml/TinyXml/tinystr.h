#ifndef TIXML_USE_STL
#ifndef TINY_STR_H
#define TINY_STR_H
#include <assert.h>
#include <string.h>
//_MSC_VER编译器的版本
#if defined (_MSC_VER) && (_MSC_VER >= 1200)
	#define TIXML_EXPLICIT explicit
#elif defined (__GNUC__) && (__GNUC__ >= 3)
	#define TIXML_EXPLICIT explicit
#else 
	#define TIXML_EXPLICIT
#endif
class TiXmlString
{
public:
	//大小的类型
	typedef size_t size_type;
	//-1
	static const size_type npos;
public:
	//构造函数
	TiXmlString() : rep_(&nullrep_)
	{}
	//copy构造函数_1
	TiXmlString(const TiXmlString & copy) : rep_(0)
	{
		//...
	}
	//copy构造函数_2  explicit必须显示调用
	TIXML_EXPLICIT TiXmlString(const char* copy) : rep_(0)
	{
		//...
	}
	//copy构造函数_3 explicit
	TIXML_EXPLICIT TiXmlString(const char* copy, size_type len) : rep_(0)
	{
		//...
	}
	//析构函数
	~TiXmlString()
	{
	}
	//赋值函数
//	TiXml
public:
private:
	struct Rep
	{
		size_type szie, capacity;
		char str[1];
	};
private:
	Rep * rep_;
	static Rep nullrep_;
};


#endif//ndef TINY_STR_H
#endif










