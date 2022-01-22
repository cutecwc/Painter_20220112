#ifndef _TIMUS1_H_
#define _TIMUS1_H_

#include<iostream>
#include<locale>
using namespace std;

class Mc1{
public:
	void test1();
};

void Mc1::test1() {
	locale china("chs");
	wcin.imbue(china);
	wcout.imbue(china);
	return;
}

/*
	locale china("chs");//use china character
	wcin.imbue(china);//use locale object
	wcout.imbue(china);
	wstring s;
	wchar_t wc=L'¡£';//wide character,wide string may be L"¿í×Ö·û"
	while (getline(wcin,s,wc))
	{
		wcout<<s<<endl;
	}
*/
void timu1() {
	Mc1 c;
	c.test1();
}
#endif
