#pragma once
#ifndef _TIMUS977_H_
#define _TIMUS977_H_

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

#include"slts.h"
/*
����һ���� **�ǵݼ�˳��** ������������� `nums`������ **ÿ�����ֵ�ƽ��** ��ɵ������飬Ҫ��Ҳ�� **�ǵݼ�˳��** ����
���룺nums = [-4,-1,0,3,10]
�����[0,1,9,16,100]
���ͣ�ƽ���������Ϊ [16,1,0,9,100]
����������Ϊ [0,1,9,16,100]

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/squares-of-a-sorted-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/
bool cmpr(int& a, int& b) {
    return a > b;
}
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

    }
    vector<int> v1(vector<int>& nums) {
        size_t len = nums.size();
        if (len <= 0) {
            return {};
        }
        else {
            for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
                *it = (*it) * (*it);
            }
            sort(nums.begin(), nums.end(), cmpr);
            return nums;
        }
    }
};
void Trys977() {
    Solution prs;
    Solcpp cc;
    std::vector<int> arrversion = { -11,-9,-4,-1,0,4,6,8,9,11,24,54,66,88,102,172,190,239,264,381,579 };//38//15
    //std::vector<int> arrversion = { 3 };
    //std::vector<int> arrversion = { 3,6 };//5//4
    //std::vector<int> arrversion = { };
    arrversion = prs.v1(arrversion);
    cc.vctprt1(arrversion);
}

#endif // !_TIMUS977_H_
