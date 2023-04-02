#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
	int len;
	char* str;  // 문자열 처리
public:
	String();  // 디폴트 생성자
	String(const char* s);  // 문자열을 받는 생성자
	String(const String& s);  // 복사 생성자 (매개변수는 객체의 참조 형태로!)
	~String();
	// 연산자 오버로딩
	String& operator= (const String& s);
	String& operator+= (const String& s);
	bool operator== (const String& s);
	String operator+ (const String& s);

	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>> (istream& is, String& s);
};

String::String()
{
	len = 0;
	str = nullptr;  // str = NULL; 해도 됨
}

String::String(const char* s)  // 포인터이므로 문자 하나 아니고 문자열을 받음
{
	len = strlen(s) + 1;  // 문자열을 포인터로 받음 -> 맨마지막 널문자를 넣기 위해 +1
	str = new char[len];  // 메모리 동적 할당
	strcpy(str, s);
}

String::String(const String& s)
{
	len = s.len;  // 위에서 문자열 길이(널문자 포함) 받아옴
	str = new char[len];
	strcpy(str, s.str);
}

String::~String()
{
	if (str != NULL)
		delete[]str;
}

String& String::operator= (const String& s)  // 대입연산자 오버로딩
{
	if (str != NULL)
		delete[]str;
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}

String& String::operator+= (const String& s)  // 복합연산자 오버로딩
{
	len += (s.len - 1);  // 문자열 두개 더하면 널문자 2개 되므로 -1 해줌
	char* tempstr = new char[len];  // 새로운 형태의 메모리 할당 받음(두개 더한 길이 만큼)
	strcpy(tempstr, str);  // strcpy : 문자열 복사해서 저장
	strcat(tempstr, s.str);  // strcat : 기존에 있던 문자열에 문자열 붙이는 함수

	if (str != NULL)
		delete[]str;
	str = tempstr;
	return *this;
}

bool String::operator== (const String& s)  
{
	return strcmp(str, s.str) ? false : true;  // 삼항 연산자 - 같으면 0(거짓) 반환 / strcmp : 문자열 두개 비교하는 함수 
}

String String::operator+ (const String& s)
{
	char* tempstr = new char[len + s.len - 1];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	String temp(tempstr);  // String temp = tempstr;
	delete[]tempstr;
	return temp;
}

ostream& operator<< (ostream& os, const String& s)  // 시프트 연산자 오버로딩 (좌측으로 이동)
{
	os << s.str;
	return os;
}

istream& operator>> (istream& is, String& s)  // 시프트 연산자 오버로딩 우측으로 이동
{
	char str[100];
	is >> str;
	s = String(str);
	return is;
}

int main()
{
	String str1 = "I like ";
	String str2 = "string class";
	String str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if (str1 == str3)
		cout << "동일 문자열!" << endl;
	else
		cout << "동일하지 않은 문자열!" << endl;

	String str4;
	cout << "문자열 입력: ";
	cin >> str4;
	cout << "입력한 문자열: " << str4 << endl;
	return 0;
}