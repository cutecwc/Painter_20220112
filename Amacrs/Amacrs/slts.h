#pragma once
#ifndef _SLTS_H_
#define _SLTS_H_
/*��������� д�ڴ˴�*/
#include<iostream>
#include<vector>
using namespace std;

class Solcpp {
public:
	void vctprt1(vector<int> nums) {
		/*����vector<int>�����Ԫ�أ�����Ϊvct<int>������ ����iterator*/
		cout << endl;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
			cout << "  " << *it;
		}
	}
	void vctprt2(vector<int> nums) {
		/*����vector<int>�����Ԫ�أ�����Ϊvct<int>������ ֱ�ӷ���*/
		cout << endl;
		for (size_t it = 0; it < nums.size(); it++) {
			cout << "  " << nums[it];
		}
	}
};

#endif
