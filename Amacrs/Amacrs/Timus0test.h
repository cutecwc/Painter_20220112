#ifndef _TIMUS0TEST_H_
#define _TIMUS0TEST_H_

#include<iostream>
#include<locale>
#include<Windows.h>
using namespace std;

class Mc1{
public:
	void test1();
	void test2();
	void test3();
	void test4();
};

void timu1() {
	Mc1 c;
	c.test3();
}

void Mc1::test1() {
	locale china("chs");
	wcin.imbue(china);
	wcout.imbue(china);
	return;
}

void Mc1::test2(){
	cout << "id""en1" << endl;
	cout << "id\
en2" << endl;
	cout << "iden3" << endl;
	return;
}

void Mc1::test3()
{
	string cc = "1234567890";
	int len = cc.size();
	cout << "len is " << len << endl;
	cout << cc;
	for (int i = 0; i < len; i++) {
		Sleep(300);
		cout << " ";
		cout << "\b\b";
	}
}

inline void Mc1::test4()
{
	int i = 4, j, k;
	j = i--;    //i先赋值给j，然后i在执行i=i-1;
	k = --i;    //i先执行i=i-1，然后再赋值给;
	printf("i=%d,j=%d,k=%d", i, j, k);
}

#endif
