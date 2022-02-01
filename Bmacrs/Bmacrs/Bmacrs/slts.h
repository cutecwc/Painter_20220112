#pragma once
#ifndef _SLTS_H_
#define _SLTS_H_
/*程序的轮子 写在此处*/
#include<iostream>
#include<vector>
using namespace std;

class Solcpp {
public:
	void vctprt1(vector<int> nums) {
		/*访问vector<int>里面的元素，参数为vct<int>的数组 迭代iterator*/
		cout << endl;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
			cout << "  " << *it;
		}
	}
	void vctprt2(vector<int> nums) {
		/*访问vector<int>里面的元素，参数为vct<int>的数组 直接访问*/
		cout << endl;
		for (size_t it = 0; it < nums.size(); it++) {
			cout << "  " << nums[it];
		}
	}
};

#endif
