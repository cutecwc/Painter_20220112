#pragma once
#ifndef _TIMUS977_H_
#define _TIMUS977_H_

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

#include"slts.h"
/*
给你一个按 **非递减顺序** 排序的整数数组 `nums`，返回 **每个数字的平方** 组成的新数组，要求也按 **非递减顺序** 排序。
输入：nums = [-4,-1,0,3,10]
输出：[0,1,9,16,100]
解释：平方后，数组变为 [16,1,0,9,100]
排序后，数组变为 [0,1,9,16,100]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/squares-of-a-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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
