#ifndef TIXML_USE_STL
#ifndef TINY_STR_H
#define TINY_STR_H
#include <assert.h>
#include <string.h>
//_MSC_VER�������İ汾
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
	//��С������
	typedef size_t size_type;
	//-1
	static const size_type npos;
public:
	//���캯��
	TiXmlString() : rep_(&nullrep_)
	{}
	//copy���캯��_1
	TiXmlString(const TiXmlString & copy) : rep_(0)
	{
		//...
	}
	//copy���캯��_2  explicit������ʾ����
	TIXML_EXPLICIT TiXmlString(const char* copy) : rep_(0)
	{
		//...
	}
	//copy���캯��_3 explicit
	TIXML_EXPLICIT TiXmlString(const char* copy, size_type len) : rep_(0)
	{
		//...
	}
	//��������
	~TiXmlString()
	{
	}
	//��ֵ����
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










